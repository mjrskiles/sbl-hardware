/**
 * @file malloc_trap.cpp
 * @brief Heap allocation trap for bare-metal firmware (FDP-020)
 *
 * Intercepts malloc/free/calloc/realloc via GCC's --wrap linker feature.
 * Any call to a heap allocator triggers a breakpoint (bkpt #0), making
 * accidental dynamic allocation impossible to miss during development.
 *
 * This catches:
 *   - Direct malloc/free calls
 *   - C++ new/delete (which call malloc/free)
 *   - newlib internal allocations (_malloc_r, etc.)
 *   - Third-party code that assumes a heap
 *
 * The --wrap flags are set in CMakeLists.txt so all downstream firmware
 * inherits them automatically. If a legitimate allocation is needed
 * during init (e.g., USB stack), call __real_malloc() directly.
 *
 * When a trap fires:
 *   - Debugger stops at the bkpt instruction
 *   - Backtrace shows exactly who tried to allocate
 *   - Without debugger: CPU enters HardFault (also useful)
 */

#include <cstddef>

// Newlib reentrant struct (forward-declared to avoid pulling in <reent.h>)
struct _reent;

extern "C" {

// --- Standard wrappers ---

void* __wrap_malloc(size_t) {
    __asm volatile("bkpt #0");
    while (true) {}  // Never reached; satisfies [[noreturn]]
}

void __wrap_free(void*) {
    __asm volatile("bkpt #0");
    while (true) {}
}

void* __wrap_calloc(size_t, size_t) {
    __asm volatile("bkpt #0");
    while (true) {}
}

void* __wrap_realloc(void*, size_t) {
    __asm volatile("bkpt #0");
    while (true) {}
}

// --- Newlib reentrant wrappers ---

void* __wrap__malloc_r(struct _reent*, size_t) {
    __asm volatile("bkpt #0");
    while (true) {}
}

void __wrap__free_r(struct _reent*, void*) {
    __asm volatile("bkpt #0");
    while (true) {}
}

void* __wrap__calloc_r(struct _reent*, size_t, size_t) {
    __asm volatile("bkpt #0");
    while (true) {}
}

void* __wrap__realloc_r(struct _reent*, void*, size_t) {
    __asm volatile("bkpt #0");
    while (true) {}
}

} // extern "C"

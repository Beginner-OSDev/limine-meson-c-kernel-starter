#ifndef KHALT_H
#define KHALT_H

#if defined(ARCH_X86_64)
void khalt() {
    asm volatile("hlt");
}
#elif defined(ARCH_AARCH64)
void khalt() {
    asm volatile("wfi");
}
#elif defined(ARCH_RISCV64)
void khalt() {
    asm volatile("wfi");
}
#endif

#endif
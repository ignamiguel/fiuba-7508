# Compilar C y ASM
gcc -g -m32 -O1 -c kern0.c boot.S

# Enlazar
ld -m elf_i386 -Ttext 0x100000 kern0.o boot.o -o kern0

# Lanzar
#qemu-system-i386 -serial mon:stdio -kernel kern0

# Debug
qemu-system-i386 -serial mon:stdio -S -kernel kern0 -gdb tcp:127.0.0.1:7508 
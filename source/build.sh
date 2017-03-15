#!/bin/sh

mkdir -p output
nasm -f elf32 loader.s
ld -T link.ld -melf_i386 loader.o -o output/kernel.elf

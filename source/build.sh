#!/bin/sh

mkdir -p output
ld -T link.ld -melf_i386 loader.o -o output/kernel.elf

# Basic Topic

### Why uses C as OS programming language
Because developing an OS requires a very precise control of the generated code
and direct access to memory.

## Booting
### BIOS
When the PC is turned on, the computer will start a small program that adheres
to the *Basic Input Output System* (BIOS) standard. Today, BIOS mainly runs
some early diagnostic (power-on-self-test) and then transfers control to the
**bootloader**.
### The Bootloader
The BIOS program will transer control of the PC to a program called a
*bootloader*. The bootloader's task is to transfer control to us, the operating
system developers, and our code. However, due to some restrictions of the
hardware and because of backward compatibility, the bootloader is often split
into two parts: the first part of the bootloader will transfer control to the
second part, which finally gives control of the PC to the operating system.
### Setting Up Stack
To use C, a stack is needed. Usually in OS, we define an area of memory to use
for setting up the stack.
It is better to use *bss* segment instead of *data* segment to reduce the size
of OS executable.
#### *data* Segment
In computing, a data segment (often denoted .data) is a portion of an object
file or the corresponding virtual address space of a program that contains
initialized static variables, that is, global variables and static local
variables. The size of this segment is determined by the size of the values in
the program's source code, and does not change at run time.
#### *bss* Segment
In computer programming, the name .bss or bss is used by many compilers and
linkers for a part of the data segment containing statically-allocated variables
represented solely by zero-valued bits initially (i.e., when execution begins).
It is often referred to as the "bss section" or "bss segment". Typically only
the length of the bss section, but no data, is stored in the object file.


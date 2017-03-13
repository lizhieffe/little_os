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
## The Bootloader
The BIOS program will transer control of the PC to a program called a
*bootloader*. The bootloader's task is to transfer control to us, the operating
system developers, and our code. However, due to some restrictions of the
hardware and because of backward compatibility, the bootloader is often split
into two parts: the first part of the bootloader will transfer control to the
second part, which finally gives control of the PC to the operating system.

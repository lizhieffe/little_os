# Output

There are usually two different ways to interact with the hardware,
memory-mapped I/O and I/O ports.

## Memory-mapped I/O
If the hardware uses memory-mapped I/O then you can write to a specific memory
address and the hardware will be updated with the new data. One example of this
is the framebuffer, which will be discussed in more detail later. For example,
if you write the value 0x410F to address 0x000B8000, you will see the letter A
in white color on a black background (see the section on the framebuffer for
more details).
## I/O Ports
If the hardware uses I/O ports then the assembly code instructions out and in
must be used to communicate with the hardware. The instruction out takes two
parameters: the address of the I/O port and the data to send. The instruction in
takes a single parameter, the address of the I/O port, and returns data from the
hardware. One can think of I/O ports as communicating with hardware the same way
as you communicate with a server using sockets. The cursor (the blinking
rectangle) of the framebuffer is one example of hardware controlled via I/O
ports on a PC.

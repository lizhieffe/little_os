#include "framebuffer.h"

#include "io.h"

char *fb = (char *) 0x000B8000;

void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg) {
  fb[i] = c;
  fb[i + 1] = ((fg & 0x0F) << 4 | (bg & 0x0F));
}

/* The I/O ports */
#define FB_COMMAND_PORT 0x3D4
#define FB_DATA_PORT 0x3D5

/* The I/O port commands */
#define FB_HIGH_BYTE_COMMAND 14
#define FB_LOW_BYTE_COMMAND 15

/** fb_move_cursor:
 ** Moves the cursor of the framebuffer to the given position.
 **
 ** @param pos The new position of the cursor. Framebuffer has 80 rows and 25
 **            columns. row = pos / 80, column = i % 24.
 **
 ** Note: the cursor’s position is determined with a 16 bits integer: 0 means
 ** row zero, column zero; 1 means row zero, column one; 80 means row one,
 ** column zero and so on.
 **/
void fb_move_cursor(unsigned short pos) {
  outb(FB_COMMAND_PORT, FB_HIGH_BYTE_COMMAND);
  outb(FB_DATA_PORT, ((pos >> 8) & 0x00FF));
  outb(FB_COMMAND_PORT, FB_LOW_BYTE_COMMAND);
  outb(FB_DATA_PORT, pos & 0x00FF);
}

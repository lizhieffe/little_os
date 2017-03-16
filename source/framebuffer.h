#ifndef INCLUDE_FRAMEBUFFER_H_
#define INCLUDE_FRAMEBUFFER_H_

#define FB_BLACK        0
#define FB_BLUE         1
#define FB_GREEN        2
#define FB_CYAN         3
#define FB_RED          4
#define FB_Magenta      5
#define FB_DARK_GREY    8
#define FB_LIGHT_BROWN  14
#define FB_WHITE        15

/** fb_write_cell:
 ** Writes a character with the given foreground and background to position i
 ** in the framebuffer.
 **
 ** @param i The location in the framebuffer. Framebuffer has 80 rows and 25
 **          columns. row = i / (80 * 2), column = i % (24 * 2).
 ** @param c The character
 ** @param fg The foreground color
 ** @param bg The background color
 **
 ** Note: the memory in framebuffer is divided into 16 bits cell:
 ** Bit: | 15 14 13 12 11 10 9 8 | 7 6 5 4 | 3 2 1 0 |
 ** Content: | ASCII | FG | BG |
 **/
void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg);

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
void fb_move_cursor(unsigned short pos);

#endif  // INCLUDE_FRAMEBUFFER_H_

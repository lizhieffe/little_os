#include "framebuffer.h"

int sum_of_three(int arg1, int arg2, int arg3) {
  return arg1 + arg2 + arg3;
}

void print_welcome_screen() {
  // Print out message at line 11.
  fb_write_cell(1600 + 0, 'W', FB_GREEN, FB_DARK_GREY);
  fb_write_cell(1600 + 2, 'E', FB_RED, FB_GREEN);
  fb_write_cell(1600 + 4, 'L', FB_BLUE, FB_CYAN);
  fb_write_cell(1600 + 6, 'C', FB_GREEN, FB_DARK_GREY);
  fb_write_cell(1600 + 8, 'O', FB_RED, FB_GREEN);
  fb_write_cell(1600 + 10, 'M', FB_BLUE, FB_CYAN);
  fb_write_cell(1600 + 12, 'E', FB_GREEN, FB_DARK_GREY);
  fb_write_cell(1600 + 14, ' ', FB_RED, FB_GREEN);
  fb_write_cell(1600 + 16, 'L', FB_BLUE, FB_CYAN);
  fb_write_cell(1600 + 18, 'I', FB_GREEN, FB_DARK_GREY);
  fb_write_cell(1600 + 20, 'Z', FB_RED, FB_GREEN);
  fb_write_cell(1600 + 22, 'H', FB_BLUE, FB_CYAN);
  fb_write_cell(1600 + 24, 'I', FB_GREEN, FB_DARK_GREY);
  fb_write_cell(1600 + 26, '!', FB_RED, FB_GREEN);
  fb_write_cell(1600 + 28, '!', FB_BLUE, FB_CYAN);
  // Move the cursor to line 12.
  fb_move_cursor(880);
}

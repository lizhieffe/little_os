#include "display.h"

#include "framebuffer.h"

// The current location in framebuffer. See framebuffer.h for more details about
// the definition of location.
unsigned int curr_fb_loc = 0;

// Returns the next fb location with the given |loc|.
int next_fb_location(unsigned int loc) {
  static unsigned int max_loc = 80 * 24 * 2;
  return (loc + 2) % max_loc;
}

int write(char* buf, unsigned int len) {
  unsigned int i;
  for (i = 0; i < len; ++i) {
    fb_write_cell(curr_fb_loc, buf[i], FB_GREEN, FB_BLACK);
    curr_fb_loc = next_fb_location(curr_fb_loc);
    fb_move_cursor(curr_fb_loc / 2);
  }
  return 0;
}

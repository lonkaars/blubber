/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1c1b1d", /* black  */
  [1] = "#de9dac", /* red    */
  [2] = "#9ddeaf", /* green  */
  [3] = "#dedd9d", /* yellow */
  [4] = "#9dacde", /* blue   */
  [5] = "#af9dde", /* purple */
  [6] = "#9dccde", /* cyan   */
  [7] = "#f4e0d8", /* white  */

  /* 8 bright colors*/
  [8]  = "#262427", /* black  */
  [9]  = "#f7afc0", /* red    */
  [10] = "#aff7c3", /* green  */
  [11] = "#f7f6af", /* yellow */
  [12] = "#afc0f7", /* blue   */
  [13] = "#c3aff7", /* purple */
  [14] = "#afe3f7", /* cyan   */
  [15] = "#f9ece8", /* white  */

  /* special colors */
  [256] = "#121213", /* background */
  [257] = "#fdf9f7", /* foreground */
};

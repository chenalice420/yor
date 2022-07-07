const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#060C11", /* black   */
  [1] = "#5F6054", /* red     */
  [2] = "#9D2B25", /* green   */
  [3] = "#AA554D", /* yellow  */
  [4] = "#DB635D", /* blue    */
  [5] = "#6E8974", /* magenta */
  [6] = "#B88977", /* cyan    */
  [7] = "#abcac2", /* white   */

  /* 8 bright colors */
  [8]  = "#778d87",  /* black   */
  [9]  = "#5F6054",  /* red     */
  [10] = "#9D2B25", /* green   */
  [11] = "#AA554D", /* yellow  */
  [12] = "#DB635D", /* blue    */
  [13] = "#6E8974", /* magenta */
  [14] = "#B88977", /* cyan    */
  [15] = "#abcac2", /* white   */

  /* special colors */
  [256] = "#060C11", /* background */
  [257] = "#abcac2", /* foreground */
  [258] = "#abcac2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;

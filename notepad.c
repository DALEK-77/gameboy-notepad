#include <gb/gb.h>
#include <gb/drawing.h>
#include <gb/font.h>
#include <gb/console.h>
#include <stdio.h>
void main(void)
{
  /* From GBDK2020 example: fonts*/
  font_t ibm_font, italic_font, min_font;
    int i;

    /* First, init the font system */
    font_init();

    /* Load all the fonts that we can */
    ibm_font = font_load(font_ibm);  /* 96 tiles */
    italic_font = font_load(font_italic);   /* 93 tiles */
    
    /* Load this one with dk grey background and white foreground */
    color(WHITE, DKGREY, SOLID);
    
    min_font = font_load(font_min);

    /* Turn scrolling off (why not?) */
    mode(get_mode() | M_NO_SCROLL);

  font_set(min_font);
  printf("GB Notepad\n");
  font_set(italic_font);
  printf("By DALEK_77\n\n");
  font_set(ibm_font);
  int c;

  c = getchar();

  while(c != '\n')
    {
    putchar(c);
    c = getchar();
    } 
}

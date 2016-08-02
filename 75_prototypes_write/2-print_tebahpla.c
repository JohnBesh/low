#include "my_functions.h"

/* Function that prints the alphabet in lower case and in reverse order. */
void print_tebahpla(void)
{
  char c = 'z';

  while (c >= 'a')
  {
    print_char(c);
    c--;
  }
}

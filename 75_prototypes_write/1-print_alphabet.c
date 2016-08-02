#include "my_functions.h"

/* Function that prints the alphabet, in lowercase. */
void print_alphabet(void)
{
  char c = 'a';

  while (c <= 'z') {
    print_char(c);
    c++;
  }
}

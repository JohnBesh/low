#include <unistd.h>

/* Function that prints to sdtout, one char at a time. */
int print_char(char c)
{
  return (write(1, &c, 1));
}

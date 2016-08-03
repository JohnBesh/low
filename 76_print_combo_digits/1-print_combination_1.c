#include "my_functions.h"

/* function that prints all possible combinations of single-digit numbers */
void print_combination_1(void)
{
  int i = 0;

  while (i < 10) {
    print_number(i);
    if (i != 9) {
      print_char(',');
      print_char(' ');
    }
    i++;
  }
}

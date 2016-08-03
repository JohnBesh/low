#include "my_functions.h"

/*
 * Function that prints all possible combinations of two different digits,
 * 01 and 10 are considered as the same combination of the two digits 0 and 1.
 * Prints only the smallest combination of two digits.
 */
void print_combination_2(void)
{
  int i, j; /* i is 1st digit of combinations, j is 2nd digit */
  i = 0;
  j = i + 1; /* j starts with a value of i + 1 */

  while (i < 10) { /* Loops for i */

      while (j < 10) { /* Loops for j */
        print_number(i); /* i is printed with same value until j equals 9 */
        print_number(j); /* j is printed with incremented value at every pass */

        if (i != 8) { /* Prints comma and space after each combo except for last */
          print_char(',');
          print_char(' ');
        }
        j++;
      }

    /* i is only incremented once we printed all second digits of the combinations */
    i++; /* i needs to be incremented before j is reset to i + 1 */
    /* j always starts with a value of i + 1 every time we loop for i */
    j = i + 1;
  }
}

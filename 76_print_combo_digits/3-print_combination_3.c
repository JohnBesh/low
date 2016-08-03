#include "my_functions.h"

/*
 * Function that prints all possible combinations of three different digits,
 * 012, 120, 102, 021, 201, 210 are considered as the same combination of the three digits 0, 1 and 2
 * Prints only the smallest combination of two digits.
 */
void print_combination_3(void)
{
  int i, j, k; /* i is 1st digit of combinations, j is 2nd digit, k is 3rd */

  for (i = 0; i < 10; i++) { /* Loops for 1st digit */
    for (j = (i + 1); j < 10; j++) { /* Loops for 2nd digit */
      for (k = (j + 1); k < 10; k++) { /* Loops for 3rd digit */
          print_number(i); /* i is printed with same value until j equals 9 */
          print_number(j); /* j is printed with incremented value at every pass */
          print_number(k);
          if (i < 7) { /* Prints comma and space after each combo except for last */
            print_char(',');
            print_char(' ');
        }
      } /* End of 3rd digit loop */
    } /* End of 2nd digit loop */
  } /* End of 1st digit loop */
}

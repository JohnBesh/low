#include "my_functions.h"

/*
 * Function that takes an integer as argument
 * and prints P if the number is positive,
 * N if the number is negative,
 * and Z if the number is zero.
 */

void positive_or_not(int n) /* A parameter to a function requires both a type and a name. */
{
  if (n == 0) { /* Determines if n is equal to 0 */
    print_char('Z'); /* Calls print function to print Z to denote zero */
  }
  else if ( n > 0) { /* Determines if n is greater than 0 */
    print_char('P'); /* Calls print function to print P to denote positive */
  }
  else { /* Determines if n is less than 0 */
    print_char('N'); /* Calls print function to print N to denote negative */
  }
}

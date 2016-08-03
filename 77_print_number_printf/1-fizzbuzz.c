#include "my_functions.h"

/*
 * This program prints numbers from 1 to 100.
 * For multiples of three, it prints Fizz instead of the number,
 * and for multiples of five, it prints Buzz.
 * For numbers which are multiples of both three and five, it prints FizzBuzz.
 */

void fizzbuzz(void)
{
  /* Macro definition allows constant values to be declared for use throughout our code. */
  #define MAX 100
  int i = 1;

  while (i <= MAX) { /* Prints number from 1 to MAX */
    if ((i % 3 == 0) && (i % 5 ==0)) { /* If multiples of both three and five, prints FizzBuzz. */
      printf("FizzBuzz"); /* This has to be checked first before other conditions. */
    }
    else if (i % 3 == 0) { /* If multiples of three, prints Fizz. */
      printf("Fizz");
    }
    else if (i % 5 == 0) { /* If multiples of five, prints Buzz. */
      printf("Buzz");
    }
    else { /* By default, prints number. */
      printf("%d", i);
    }

    if (i < MAX) { /* Prints a space after, except for last number. */
      printf(" ");
    }
    else {}
    i++;
  }
}

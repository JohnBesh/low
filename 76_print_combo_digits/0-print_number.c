#include "my_functions.h"

/*
 * Function that takes an integer in parameter
 * and prints it one char at a time by calling
 * the print_char function.
 */
void print_number(int n) /* Starts print process */
{
  int i, j, k, length, temp; /* Variables declaration */
  temp = 0; /* Stores previous result */
  i = n; /* Assigns i the value of n to find number of digits */
  length = 0;

  while (i != 0) { /* Finds the number of digits for i */
    i = i / 10;
    length++;
  }

  /* If number is negative, character '-' is printed before number */
  if (n < 0) { /* Need to use n and not i as i is no longer equal to n */
    print_char('-');
  }

  do { /* Makes loop work for 0 */
    i = n; /* Resets value of i to be equal to n again */
    k = length;

    while (k > 1) { /* Divides i by 10 until it contains 1 digit */
      i = i / 10;
      k--;
    }
    /* These 2 lines are needed to print more than 1 digit */
    j = i - (temp * 10);
    temp = i;

    if (j < 0) {/* If number is negative, converts it to absolute value */
      j = j * (-1);
    }

    /* Number is printed 1 char at a time. Add +48 from ASCII values */
    print_char(j + 48);
    length--;
  }
  while (length > 0);
}

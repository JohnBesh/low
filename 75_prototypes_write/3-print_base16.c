#include "my_functions.h"

/*
 * Function that prints all the numbers of base 16, from 0 to F.
 * Letters should be upper case.
 */
void print_base16(void)
{
  int i = 48; /* Initializes i to start at ASCII 48 ie char '0' */

  while (i < 71) { /* Sets a loop to cycle through 0-F ASCII values */
    if (((i >= 48) && (i <= 57)) || ((i >= 65) && (i <= 70))) { /* For char 0-9 and A-F which form base 16 char set */
      print_char(i); /*  Calls print_char function to print current value of i */
    }
    i++; /* Increments i after printing char to cycle through 0-F ASCII values */
  }
}

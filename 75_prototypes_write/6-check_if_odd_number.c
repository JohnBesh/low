#include "my_functions.h"

/* Using bit operators, this function returns 'O' if a number is odd and 'E' if number is even */
char odd(int n)
{
  int i;
  i = 1;
  if (n & i) { /* Bit operator to compare if n & i agree. If they do, number is odd */
      return ('O');
    }
  else {
      return ('E');
    }
}

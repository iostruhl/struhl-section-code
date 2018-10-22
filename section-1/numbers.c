#include <stdio.h>

// Prototype
// This lets us call print8Bits in main before we've implemented it
void print8Bits(char c);

int main() 
{
  char c = 'A';

  printf("%c\n", c);
  // print8Bits(c);
  return 0;
}

// Function that takes in a char c
// And prints out the 8 bits in binary
// Don't worry about understanding it
void print8Bits(char c)
{
  for (int i = 0; i < 8; i++)
  {
    printf("%i", !!((c << i) & 0x80));
  }
  printf("\n");
}
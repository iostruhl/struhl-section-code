#include <stdio.h>

int main() 
{
  printf("`while` loop: ");
  
  int i = 0;
  while(i < 10)
  {
    printf("%i", i);
    i++;
  }
//--------------------------------------
  printf("\n\n`do-while` loop: ");
  
  i = 0;
  do 
  {
    printf("%i", i);
    i++;
  }
  while(i < 10);

//--------------------------------------
  printf("\n\n`for` loop: ");
  
  for(i = 0; i < 10; i++)
  {
    printf("%i", i);
  }

//--------------------------------------
  printf("\n\nPoorly designed `for` loop that still works: ");
 
  i = 0;
  for( ; i < 10; )
  {
    printf("%i", i);
    i++;
  }

//--------------------------------------
  printf("\n\nEven more poorly designed `for` loop that still works: ");
  
  i = 0;
  for ( ; ; ) // equivalent to while(true)
  {
    printf("%i", i);
    i++;
    if(i >= 10) 
    {
      break;
    }
  }

//--------------------------------------
  printf("\n");
  return 0;
}
#include <stdio.h>

// Included in <cs50.h>, I just don't have it on my computer
#define string char*

int main(int argc, string argv[])
{
    (void) argc;
    // string array1 = "CS50!\0";
    char array1[6] = {'C', 'S', '5', '0', '!', '\0'};
    char array2[6] = {'M', 'A', 'L', 'A', 'N', '\0'};
    for (int i = 0; i < 30; i++)
    {
      printf("%c", array2[i]);
    }
    printf("\n");
}

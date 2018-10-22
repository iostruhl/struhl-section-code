#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Goal: Print "0....NUMBER_PER_LINE" NUMBER_OF_PRINTS times.
#define NUMBER_OF_PRINTS 500000
#define NUMBER_PER_LINE 10

int main(int argc, char **argv) {
  // Ensure program is called with an argument
  if (argc != 2) {
    printf("Make sure to call ./optimization [slow OR fast OR faster]\n");
    return 1;
  }

  // Approach 1: nested printfs
  if (strcmp(argv[1], "slow") == 0) {
    // Do NUMBER_OF_PRINTS times
    for (int i = 0; i < NUMBER_OF_PRINTS; i++) {
      // Print "0....NUMBER_PER_LINE"
      for (int j = 0; j < NUMBER_PER_LINE; j++) {
        putchar(j + '0');
      }
      putchar('\n');
    }
    printf("Done!\n");
  }

  // Approach 2: Array [0...NUMBER_PER_LINE, \0]
  if (strcmp(argv[1], "fast") == 0) {
    // Initialize NUMBER PER LINE character array and null terminator
    char arr[NUMBER_PER_LINE + 1];
    // Fill array with 0....NUMBER_PER_LINE
    for (int i = 0; i < NUMBER_PER_LINE; i++) {
      arr[i] = '0' + i;
    }
    // Terminate the array so the program knows when to stop printing
    arr[NUMBER_PER_LINE] = '\0';

    // Do NUMBER_OF_PRINTS times
    for (int i = 0; i < NUMBER_OF_PRINTS; i++) {
      // Print "0....NUMBER_PER_LINE"
      printf("%s\n", arr);
    }
    printf("Done!\n");
  }

  // Approach 3: Array with the entire print statement
  if (strcmp(argv[1], "faster") == 0) {
    // Initialize array to hold everything we'll ever print
    char arr[(NUMBER_PER_LINE + 1) * NUMBER_OF_PRINTS];

    // Do NUMBER_OF_PRINTS times
    for (int i = 0; i < NUMBER_OF_PRINTS; i++) {
      // Fill the next 10 boxes in the array with
      // 0....NUMBER_PER_LINE
      for (int j = 0; j < NUMBER_PER_LINE; j++) {
        arr[(NUMBER_PER_LINE + 1) * i + j] = j + '0';
      }
      // Add the newline
      arr[(NUMBER_PER_LINE + 1) * i + NUMBER_PER_LINE] = '\n';
    }
    // Finally, terminate the string
    arr[(NUMBER_PER_LINE + 1) * NUMBER_OF_PRINTS - 1] = '\0';

    // Print out the entire string
    printf("%s\n", arr);
    printf("Done!\n");
  }
}
#include <stdio.h>

#define string char*

int main(int argc, string argv[]) {
  // Print arg count
  printf("argc: %i\n", argc);

  // Print arguments in readable form
  printf("argv: [");
  for (int i = 0; i < argc-1; i++) {
    printf("%s, ", argv[i]);
  }
  printf("%s]\n", argv[argc-1]);

  printf("%s\n", argv[1]);
}
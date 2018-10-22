#include <stdio.h>
#include <stdlib.h>

// teachingFellow definition
typedef struct teachingFellow {
  char *name;
  unsigned long long psetsToGrade;
  struct teachingFellow* previousTF;
} teachingFellow;

// Function prototypes
void printTFByCopy(teachingFellow tf);
void printTFByReference(teachingFellow* tfptr);

int main() {
  teachingFellow *isaac = malloc(sizeof(teachingFellow));
  isaac->name = "Isaac";
  isaac->psetsToGrade = 24;
  isaac->previousTF = NULL;


  // TODO 0: Make a new teachingFellow called Brian
  teachingFellow *brian = malloc(sizeof(teachingFellow));
  brian->name = "Brian";
  brian->psetsToGrade = 0; // he has a grader
  brian->previousTF = NULL;

  // TODO 1: Modify Isaac to reflect that Brian was his TF
  isaac->previousTF = brian;  

  // TODO 4: Put Isaac and Brian on the heap


  // Not that useful print statement - will replace with functions
  printf("%s, %llu, %p\n", isaac->name, isaac->psetsToGrade, isaac->previousTF);

  // Passes in a teachingFellow, prints to stdout
  printTFByCopy(*isaac);

  // Passes in a pointer to a teachingFellow, prints to stdout
  printTFByReference(isaac);
}

void printTFByCopy(teachingFellow tf) {
  // TODO 2: Implement printTFByCopy
  // Should print name, psets to grade, and name of previous TF (if any)
  printf("%s, %llu, %s\n", tf.name, tf.psetsToGrade, tf.previousTF->name);
}


void printTFByReference(teachingFellow* tfptr) {
  // TODO 3: Implement printTFByReference
  // Should print name, psets to grade, and name of previous TF (if any)
  printf("%s, %llu, %s\n", tfptr->name, tfptr->psetsToGrade, tfptr->previousTF->name);
}
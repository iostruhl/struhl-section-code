#include <stdio.h>
#include <stdlib.h>

typedef struct deque {
  char* name;
  struct deque* next;
  struct deque* prev;
} deque;

// prototypes
void pushleft(deque* head, char* name);
void pushright(deque* tail, char* name);
void popleft(deque* head);
void popright(deque* tail);
void printForward(deque* q);
void printReversed(deque* q);


int main() {
  // Initialize head and tail nodes NEVER TO BE TOUCHED
  deque* head = (deque*) malloc(sizeof(deque));
  head->name = "HEAD";   // [HEAD]
  head->next = NULL;
  head->prev = NULL;

  deque* tail = (deque*) malloc(sizeof(deque));
  tail->name = "TAIL";  // [HEAD, TAIL]
  tail->next = NULL;
  tail->prev = NULL;

  // Initialize double links
  head->next = tail;
  tail->prev = head;

  // Print the nothing queue
  printForward(head);
  printReversed(tail);

  // Load the deque
  pushleft(head, "B"); // [HEAD, B, TAIL]
  pushleft(head, "A"); // [HEAD, A, B, TAIL]

  pushright(tail, "C");// [HEAD, A, B, C, TAIL]

  printForward(head);
  printReversed(tail);

  popleft(head); // [HEAD, B, C, TAIL]
  printForward(head);

  
  pushright(tail, "C"); // [HEAD, A, B, C, TAIL]
  // printForward(head);

  popright(tail);
  // printForward(tail);
}

// Pushes name onto the left of the deque, returns a pointer to the new head
void pushleft(deque* head, char* name) {
  // creates new node to hold name
  deque* tmp = (deque*) malloc(sizeof(deque));

  // initialize tmp
  tmp->name = name;
  tmp->next = head->next;
  tmp->prev = head;

  head->next = tmp;
  tmp->next->prev = tmp;


}

// Pushes name onto the right of the deque, returns a pointer to the new tail
void pushright(deque* tail, char* name) {
  deque *tmp = (deque*) malloc(sizeof(deque));

  tmp->name = name;

  tmp->next = tail;
  tmp->prev = tail->prev;

  tail->prev = tmp;
  tmp->prev->next = tmp;

}

// Removes leftmost item from deque
void popleft(deque* head) {
  // keep track of the node we want to remove
  deque* to_remove = head->next;

  // TODO: update links
  head->next = to_remove->next;
  head->next->prev = head;

  // free the node, because we no longer need it (and will soon no longer have access to it!)
  free(to_remove);
}

// Removes rightmost item from deque
void popright(deque* tail) {
  // keep track of the node we want to remove
  deque* to_remove = tail->prev;

  // TODO: update links
  tail->prev = to_remove->prev;
  tail->prev->next = tail;

  // free the node, because we no longer need it (and will soon no longer have access to it!)
  free(to_remove);
  
}

// Print functions
void printForward(deque* q) {
  while (q) {
    printf("%s\t", q->name);
    q = q->next;
  }
  printf("\n");
}

void printReversed(deque* q) {
  while (q) {
    printf("%s\t", q->name);
    q = q->prev;
  }
  printf("\n");
}
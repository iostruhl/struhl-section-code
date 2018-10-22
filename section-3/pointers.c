#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //int a = 4;

    int *b = (int *) malloc(sizeof(int) * 4);

    *b = 11;
    *(b + 1) = 12;
    *(b + 2) = 13;
    *(b + 3) = 14;
    //int *c = &a;

//    char *s = "Hello";

    //printf("%c\n", *(s + 3));
    for (int i = 0; i < 4; i++) {
        printf("%p\n", &b[i]);
    }

    //printf(&a == b ? "TRUE\n" : "FALSE\n");

    free(b);
}


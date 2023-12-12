#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(void)
{
    char *s = get_string("s: "); // get_string returns a pointer to a string
    char *t = get_string("t: "); // get_string returns a pointer to a string

    if (strcmp(s, t) == 0) // strcmp returns 0 if the strings are the same
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
    printf("s is at address %p\n", s); // %p is a format specifier for a pointer
    printf("t is at address %p\n", t); // %p is a format specifier for a pointer
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int length = 13;
    char *c = malloc(sizeof(char) * length);
    strcpy(c, "Hello World!");
    printf("%s\n", c);
    free(c);
}
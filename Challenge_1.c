// TASK
// Copy the string from dynamic array foo to dynamic array bar.


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
        char * foo = "hello";
        //complete the code
        char * bar = malloc(strlen(foo));
        strcpy(bar, foo);
        printf("%s",bar);
        return 0;
}

// TASK
// Copy the string from dynamic array foo to dynamic array bar.


#include <stdlib.h>
#include <string.h>

int main () {
        char * foo = "hello";
        //complete the code
        char * bar = malloc(sizeof(char)*strlen(foo+1));
        strcpy(bar, foo);
        printf("%s",bar);
        return 0;
}

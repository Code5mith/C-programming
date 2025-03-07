#include "stdio.h"

int str_len(char *s)/* char pointer */{
    
    int length = 0; /* must be initialized */
    char *s_ptr = s;

    while (*s_ptr != '\0'){
        printf("Mem address : %p, Char val: %c \n", (void *) s_ptr, *s_ptr);
        length++;
        s_ptr++;
    }
    return length;
}
int main(){
    
    char str[] = "C is awsome!"; /* Auto size */

    printf("\n The size of the char array : %d \n", str_len(str)); 

    return 0;
}

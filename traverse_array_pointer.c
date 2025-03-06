#include "stdio.h"

int main(){
    
    int list[5] = {1,2,3,4,5};
    
    int *ptr = list; /* pointer to first item */

    int *endptr = list + 5; /* pointer to last + 1 item outside array */


    while (ptr < endptr){ /* endptr = next to last item outside array */

        printf("Item : %d \n", *ptr);
        ptr++;
    }
    
    printf("Test endptr is : %d , Garbage value for random memloc \n", *endptr);

    return 0;

}


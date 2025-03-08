#include "stdio.h"

int main(){

    int list[5] = {1,2,3,4,5};

    printf("%p\n", (void *)list); /* mem loc */

    for(int i = 0; i < 5; i++){
        printf("Item : %d, Address: %p \n", *(list + i),(void *)(list + i));   
    }
    return 0;
}

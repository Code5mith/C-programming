#include <stdio.h>

int main() {
    
   char text[6] = {'H','e','l','l','o','\0'}; 
    
    int length = 5;

   
    // iterate to mid point to swap each edges 
    
    for (int i = 0; i < length / 2; i++)

        {
            char temp;
            
            temp = text[i];
            

            text[i] = text[(length - (i + 1))];

            text[(length - (i + 1))] = temp;

            printf("first swap : %c and second swap : %c \n", text[i], text[(sizeof(text) - (i + 1))]);
            
        }

        printf("Reversed char list :%s \n", text);
        
    return 0;
} 
 

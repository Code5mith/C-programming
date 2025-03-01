#include <stdio.h>

int main() {
    
    char text[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Important: Null terminator!

   // comment for git
   

    for (int i = 0; i < 5; i++)

        {
            char temp;
            
            temp = text[i];
            
            //replace left item with right item 

            text[i] = text[(sizeof(text) - (i + 1))];


            // replace right item with the temp char value

            text[(sizeof(text) - 1)] = temp;

            printf("first swap : %c and last swap : %c \n", text[i], text[(sizeof(text) - (i + 1))]);
            
        }

        printf("Reversed char list :%s \n", text);
        
    return 0;
} 
 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char string[100];
    int i, a = 0;
    bool isWordstart = false;
    bool isWordend = false;
    printf("Enter your value: ");
    scanf("%[^\n]s", string);

    // loop through every element in an array
    for(i = 0; string[i] != '\0'; ++i)
    {
        // check when a word start
        if(string[i] == ' ' && string[i+1] != ' ')
        {
            isWordstart = true;
        }    
        // check when the word end
        if(string[i] != ' ' && (string[i+1] == ' ' || '\0'))
        {
            isWordend = true;
        }
        
        // increase counter when end a world
        if(isWordstart == true && isWordend == true)
        {
            a++;
            isWordstart = false;
            isWordend = false;
        }
    }
  
    if(string[0] != ' ')
    {
        a++;
    }

    printf("%d",a);
    
    return 0;
}

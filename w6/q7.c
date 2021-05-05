#include <stdio.h>

int main(){
    
    char inputString[100];

    printf("Please input the string: ");
    scanf("%[^\n]s", inputString);


    int i = 0;
    while(*(inputString + i) != '\0')
    {
        if(*(inputString + i ) >= 97 && *(inputString+i) <=122)
        {
            
            *(inputString + i) = *(inputString + i)  - 32;

            // *(inputString + i) -= 32
        }
        i++;
    }

    printf("\n%s", inputString);
    
    return 0;


} 
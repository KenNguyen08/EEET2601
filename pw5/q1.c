#include <stdio.h> 


int main(void)
{
    char inputString[100];
    int count = 0;


    printf("Input a string: ");
    scanf("%[^\n]s",inputString);
    for (count = 0; inputString[count] != '\0'; ++count);    
      printf("Length of the string: %d\n", count);


        

    return 0;
}
#include <stdio.h> 

int main ()
{
    char intputLetter;

    printf("Please enter only one character: ");
    scanf("%c", &intputLetter);
    if( intputLetter >= 97 && intputLetter <= 122)
    {
        printf("\nlower");
    }
    else if(intputLetter >= 65 && intputLetter<=90 )
    {   
        printf("\nupper");
    }    




    

    return 0;
}



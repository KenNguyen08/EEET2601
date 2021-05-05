#include <stdio.h> 

int main ()
{
    char Input[100];

    printf("Enter your put: ");
    scanf("%[^\n]", Input);

    int i = 0, amountNumber = 0, amountLetter = 0, amountPunc = 0;

    for (i = 0; Input[i] != '\0'; i++ )
    {
        // amount of number
        if ((Input[i] >= 48 && Input[i] <= 57))
        {
            amountNumber++;
        }
        else if((Input[i] >= 33 && Input[i] <= 47)  || (Input[i] >=123 && Input[i] <=126)||(Input[i] >=58 && Input[i] <=64))
        {
            amountPunc++;
        }
        else if ((Input[i] >= 97 && Input[i] <=122) || (Input[i] >= 65 && Input[i] <= 90))
        {
            amountLetter++;
        }
    
    }    

    printf("\namount number is: %d \namount letter is: %d \namount punctuation is: %d",amountNumber, amountLetter,amountPunc );
    

    return 0;
}

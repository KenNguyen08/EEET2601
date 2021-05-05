#include <stdio.h> 

int main ()
{
    char intputSentence[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]", intputSentence);

    int i = 0;
    while (intputSentence[i] != '\0')
    {
        
        if( intputSentence[i] >= 97 && intputSentence[i] <= 122)
        {
            intputSentence[i] = intputSentence[i] - 32;
        }
        else if(intputSentence[i] >= 65 && intputSentence[i]<=90 )
        {   
            intputSentence[i] = intputSentence[i] + 32;
        }  
        i++;
    }

    printf("\n%s", intputSentence);
    

    return 0;
}

#include <stdio.h>
#include <string.h>


int main()
{
    //delare array of strings
    char listOfFullNames[5][100];

    //get 5 full names
    for(int i = 0; i < 5; i++)
    {   
        printf("Enter full name %d: ", i + 1);
        scanf("%[^\n]s", listOfFullNames[i]);
        getchar();  // read '\n'
    }

    printf("\nlist of all first names: ");

    for(int i = 0; i < 5; i++)
    {
        int j = 0;
        while(listOfFullNames[i][j] != ' ')
        {
            printf("%c", listOfFullNames[i][j]);
            j++;
        }
        
        i != 4 ? printf(", ") : printf(".");
    }    
    return 0;    
}

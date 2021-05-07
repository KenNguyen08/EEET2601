#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
void getName(int order, char* getFullName);
void useSortListOfName(char *names , int size);
void swap(char **str1, char **str2);

int main()
{
    char nameList [5][100] ;
    for(int i =0; i < 5; i++)
    {   
        do
        {
            getName(i+1, nameList[i]);
        }
        while(nameList[i][0] == '\0' || nameList[i][0] == ' ');



    }
    
    //sort array in alphabecal order
    
    for(int i = 5 - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(nameList[j][0] > nameList[j+1][0])
            {
                int temp[100];
                strcpy(temp,nameList[j]);
                strcpy(nameList[j], nameList[j+1]);
                strcpy(nameList[j+1], temp);
            }
        }    
    }

        for(int i = 0; i  < 5; i++)
    {
        printf("%s\n", nameList[i]);
    }

    
    
    return 0;
}

 void getName(int order, char* getFullName)
{
   
        printf("Enter Full Name %d: ", order);
        scanf("%[^\n]s", getFullName);
        getchar();
    
}

void useSortListOfName(char *names, int size)
{
    for(int i = 0; i  < 5; i++)
    {
        printf("%s\n", names);
    }

    for( int i = size - 1; i > 0; i--)
    {
        for(int j = 0; i < size; j++)
        {
        }
    }
}

void swap(char **str1, char **str2){
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
    
}


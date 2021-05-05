#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][100];

    for(int i=0; i < 5; i++)
    {
        print("enter name %d", i +1);
        scanf("%[^\n]s", names[i]);
        getchar();
    }

    //sort in alphabetical order
    char *pointer = *bubbleSort(names, 5);
    for(int i = 0; i < 5; i++)
    {
        printf("%s", *(pointer + i))
    } 

    return 0;
}
char * bubbleSort(char arr[5][100], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
  
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j][0] > arr[j+1][0])
              swap(&arr[j], &arr[j+1]);
    
    return arr; 
}

void swap(char *first, char *second)
{
    char *temp = second;


}

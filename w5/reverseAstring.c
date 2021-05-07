#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",string);

   int len = strlen(string);
   int middle = len /2;
   int tmp;
   for(int i = 0; i < middle; i++)
   {
       tmp = string[i];
       string[i] = string[len - i  -1];
       string[len -i -1] = tmp; 
   }

   printf("%s\n", string);
    return 0;
}
#include <stdio.h>

int fun()
{
  int count = 0;
  count++;
  return count;
}
   
int main()
{
  printf("%d ", fun());
  printf("%d ", fun());
  return 0;
}
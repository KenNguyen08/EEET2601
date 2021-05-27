#include <stdio.h>

void change(int array[],int length)
{
  printf("array address inside function: %p\n", array);
  int i;
  for(i = 0 ; i < length ; i++)
      array[i] = 5;
}

void change2(int *a)
{
    *a =100;
}

int main()
{
  int i, length = 3;
  int test[3] = {1,2,3};
  int c = 9;
  printf("\nbefore: %d", c);  
  change2(&c);
  printf("\nafter: %d", c);

  
  for(i = 0 ; i < length ; i++)
  {
    printf("\n (%d)", test[i]);
  }


  printf("Before:");
  printf("before change, test address: %p\n", test);
  change(test, 3);
  printf("After:");
  printf("after change, test address: %p\n", test);

    for(i = 0 ; i < length ; i++)
      printf("\n (%d)", test[i]);

  return 0;
}
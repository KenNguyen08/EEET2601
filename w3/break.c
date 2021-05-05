#include <stdio.h>

int main(void) {
     int i = 0;
  do{
      printf("hello world: %d", i);
      i++;   
  }while(i < 0 );
 //do-while loops will check the condition after the first execute

 //while loops will check the condition first
 while(i < 0)
 {
     printf("hello world: %d", i);
 }

for(int i = 0; i < 10; i++)
 {
     printf("hello world");
 } 

 while(i < 10)
 {
    printf("\nhello world\n"); 
    i++;

 }
} 
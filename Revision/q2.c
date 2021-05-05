#include <stdio.h>
int main (){

float gradingList[10];
// loop of scanf to insert quiz score to gardingList
for (int i =0; i <10 ; i++)
{
  float score = -1;
 while(score < 0 || score > 10)
 {  
    printf("Enter mark for quiz %d:\n", i +1);
    scanf("%f", &score);
 }
 gradingList[i] = score;

}


// bubble sort to sort the list in descending order 
 for(int i =10; i > 0; i-- )
    {
        for(int k = 0; k < i; k++)
        {
            if(gradingList[k] <  gradingList[k+1])
            {
                //swap
                float temp = gradingList[k];
                gradingList[k] = gradingList[k+1];
                gradingList[k+1] = temp;
            
            }
        }
    }
// print the list 
float sum = 0, average;    
for(int i =0 ; i < 10; i++)
{
    sum += gradingList[i];   
    printf(" %.2f ", gradingList[i]);
}

average = sum / 10;
printf("\nAverage is:\n %.2f", average);




return 0;
}

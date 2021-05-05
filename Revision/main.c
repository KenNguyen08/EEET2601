/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2021A
  Lab Assessment: Assessment 1
  Author: Tran Thinh Thu
  ID: s3894296
  Created  date: 09/04/2021 
  Acknowledgement: 
*/

#include <stdio.h>

int main (){
	int lines, i, num, j, isCorrect ;
	printf("Enter the number of lines: ");
	scanf("%d", &lines);
    if (lines >0 && lines <= 15)
    {
        	for (i = lines; i >0 ; i++) {
		printf("%d ", i);
		for(num= i-1; num > 0; num++ ){
			printf("%d ", num );
		}
		for (j= 2; j<= i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
    }
    else{
       printf("please enter from 1 to 15");
    }


    
    return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int userInput = 0, computerInput, counter = 0;


    while (userInput < 1 || userInput > 3)
    {
        // take user input
        if (counter == 0)
        {
            printf("Insert 1 for rock, 2 for paper, 3 for scissor: ");

        }
        else{
            printf("Please insert 1 for rock, 2 for paper, 3 for scissor: ");
        }
        scanf("%d", &userInput);
        counter++; 
    } 
    // display userinput
    char *nameOfUserResult;
    switch(userInput)
    {
        case 1:
            nameOfUserResult = "Rock";
        break;
        case 2:
            nameOfUserResult = "Paper";
        break;
        case 3:
            nameOfUserResult = "Scissor";
        break;
    }
    printf("\nYour input is: %s", nameOfUserResult);

    //random from 1 to 3
    // set the seed for rand()
    srand(time(NULL));
    computerInput = rand() % 3 + 1;
    // user pointer instead of string
    char *nameOfComputerResult; 
    
    switch(computerInput)
    {
        case 1:
            nameOfComputerResult = "Rock";
        break;
        case 2:
            nameOfComputerResult = "Paper";
        break;
        case 3:
            nameOfComputerResult = "Scissor";
        break;
    }
    
    // print computer input
    printf("\nComputer input is: %s", nameOfComputerResult);
    // compare the answers

    if(userInput == computerInput)
    {
        printf("\ndraw.\n ");
    }
    else if (userInput - computerInput == 1)
    {
        printf("\nuser win \n");
    }
    else if (userInput - computerInput == -1)
    {
        printf("\ncomputer win \n");
    }
    else if ( userInput -computerInput == -2)
    {
        printf("\nuser win \n");
    }
    else if (userInput - computerInput == 2)
    {
        printf("\ncomputer win\n");
    }

   


    return 0;
}
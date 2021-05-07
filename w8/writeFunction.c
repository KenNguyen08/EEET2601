#include <stdio.h>
#define SIZE 5
#include <stdlib.h>
#include <time.h>

// User-defined function declarations
void getarray(int *arr, int size);
void outarray(int *arr, int size);
void reversearray(int *arr, int size);
int largest(int *arr, int size);
int inputcheck();
int inarray(int *arr, int check);
void aftercheck(int *arr);

int main() {
    int arr[SIZE];
    int i;
    int check;

    // Call user-defined functions
    getarray(arr, SIZE);
    outarray(arr, SIZE);
    reversearray(arr, SIZE);
    printf("The largest element in the array is %d\n", largest(arr , SIZE));
    aftercheck(arr);
    
    return 0;
}

// User-defined function definitions
void getarray(int *arr, int size){
    srand(time(NULL));
    for (int i = 0; i < size; i++){
        arr[i] = rand() % 11;
    }
}

void outarray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%5d", arr[i]);
    }
    printf("\n");
}

void reversearray(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%5d", arr[i]);
    }
    printf("\n");
}


int largest(int *arr, int size) {
    int largest = arr[0];
    for (int i = 1 ; i < size; i++) {
        if (largest < arr[i]){
            largest = arr[i];
            
        } 

    }
    return largest;
}

int inputcheck() {
    int check;
    printf("Enter a number u want to check: ");
    scanf("%d", &check);
    return check;
}

int inarray(int *arr, int value) {
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == value) {
            return 1;
        }
    }
    return 0;
}

void aftercheck(int *arr) {
    int value = inputcheck();
    if (inarray(arr, value)){
        printf("%d is in the array\n", value);
    } else {
        printf("%d is not in the array\n", value);
    }
}
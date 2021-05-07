#include <stdio.h>

void printarray(int *arr, int size) {
    for (int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void printarrayreverse(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--){
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int max(int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++){
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int findinteger(int *arr, int size, int num) {
    for (int i = 0; i < size; i++){
        if (num == arr[i]) {
            return 1;
        }
    }
    return 0;
}
#include <stdio.h> 

int abc(int i){
    return (++i);
}

int main(){

    int i = abc(10);
    printf("%d", i);
    return 0;
}


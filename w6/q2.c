#include <stdio.h>

int main(){
    char a = 'a', b = 'b', c, *p, *q, *r;
	const int f = -10;
	 int * s = &f; // value pointer value can't be changed
	// int  * const s = &f address that pointer points to cant changed
	// const int *const a value and address can't be changed
	// s = &a;
	//f = 11;
	*s = -1000;
	printf("%d",f);
    printf("The address of a is %p\n", &a);
	printf("The address of b is %p\n", &b);
	printf("The address of c is %p\n", &c);
    printf("The address of p is %p\n", &p);
	printf("The address of q is %p\n", &q);
	printf("The address of r is %p\n", &r);
return 0;
}

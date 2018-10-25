// q1

#include <stdio.h>

int main(int arg, char* argc[])
{
	double pi = 3.14;
	char theLetterE = 'e';
	char* pointerToE = &theLetterE;

	int a = 2;
	int* b = &a;
	long c = 30500;
	double* d = &pi;
	char** e = &pointerToE;
	
	printf("Size of a = %d\n", sizeof(a));
	printf("Size of b = %d\n", sizeof(b));
	printf("Size of c = %d\n", sizeof(c));
	printf("Size of d = %d\n", sizeof(d));
	printf("Size of e = %d\n", sizeof(e));
}



// q1

#include "pch.h"
#include <iostream>

int main(int arg, char* argc[])
{
	printf("Hello assignment1.\n");

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



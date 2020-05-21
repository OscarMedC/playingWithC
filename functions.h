#ifndef FUNCTIONS_h
#define FUNCTIONS_h

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct twoValues {
	int a;
	int b;
};

void basicPointer();
void swap(int* a, int* b);
int strLength(char str[]);
void printString(char str[]);



#endif

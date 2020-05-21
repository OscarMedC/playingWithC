#ifndef FUNCTIONS_h
#define FUNCTIONS_h

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct twoValues {
	int a;
	int b;
};

struct book {
	char name[50];
	char author[50];
	char genre[50];
	int publYear;
};

void basicPointer();
void swap(int* a, int* b);
int strLength(char str[]);
void printString(char str[]);
void book_add_new(struct book * newBook);
void print_book(struct book printBook);


#endif

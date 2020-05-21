#include "functions.h"

void basicPointer(){

	int a = 0, b = 0;

	int* p = NULL;

	printf("Value of a: %d", a);
	printf("\nValue of a: %d", b);

	printf("\nEnter new value for a: ");
	scanf_s("%d", &a);

	printf("\nNew value of a: %d", a);
	printf("\nThe address of a: %p", &a);

	printf("\nThe address of pointer p: %p", p);

	p = &a;

	printf("\nNew address for pointer p: %p", p);

	b = *p;

	printf("\nNew value of b: %d\n", b);
}

void swap(int* a, int* b) {

	int t = 0;

	t = *a;
	*a = *b;
	*b = t;
}

int strLength(char str[]) {

	int l = 0;

	while (str[l] != '\n') {
		l++;
	}

	return l;
}

void printString(char str[]) {

	int l = 0;
	while (str[l] != '\n') {
		printf("%c", str[l]);
		l++;
	}
}
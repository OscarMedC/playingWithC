#ifndef FUNCTIONS_h
#define FUNCTIONS_h
#define _CRTDBG_MAP_ALLOC

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
#include <stdlib.h>
#include <crtdbg.h>

#define MAX 52
#define MAX_RANKS 13
#define MAX_SUITS 4

struct cardDeck {
	int deck[4][52];
};

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

struct library {
	int nrofBooks;
	struct book* collection[];
};

enum months {
	Januari = 31,
	Februari = 28,
	Mars = 31,
	April = 30,
	May = 31,
	June = 30,
	July = 31,
	August = 31,
	September = 30,
	October = 31,
	November = 30,
	December = 31
};

enum week {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

void basicPointer();
void swap(int* a, int* b);
int strLength(char str[]);
void printString(char str[]);
void book_add_new(struct book * newBook);
void print_book(struct book printBook);
struct book* add_new_book(struct book* newBook);
void carddeck_initialize(struct cardDeck* cards);
void deck_print(struct cardDeck cards);
void deck_shuffle(struct cardDeck* cards);
void randTest();




#endif

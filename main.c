#include "functions.h"


int main() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	struct book* myBooks = NULL;

	myBooks = add_new_book(myBooks);

	printf("%s\n", myBooks->name);

	free(myBooks);

	return 0;
}

//swap driver
/*
int a = 5, b = 2;

printf("Values before swap, a = %d; b = %d", a, b);

swap(&a, &b);

printf("\nValues after swap, a = %d; b = %d", a, b);
*/
//strLength driver
/*
char str[15];

fgets(str, sizeof(str), stdin);

int length = strLength(str);

printf("\n%d", length);
*/
//printString driver
/*
char str[15];

fgets(str, sizeof(str), stdin);

printString(str);
*/
//struct twoValues driver
/*	
struct twoValues test;

test.a = 5;
test.b = 9;

printf("Values before swap; a: %d, b = %d", test.a, test.b);

swap(&test.a, &test.b);

printf("\nValues after swap; a: %d, b = %d\n", test.a, test.b);
*/
//struct print_book driver
/*
struct book testBook;
book_add_new(&testBook);
print_book(testBook);
*/
//struct add_new_book driver
/*
struct book* myBooks;

myBooks = NULL;

printf("Adress of struct myBooks = %p\n", myBooks);

myBooks = malloc(sizeof(struct book));

printf("Adress of struct myBooks = %p\n", myBooks);
printf("Adress of struct myBooks = %p\n", &myBooks->publYear);

free(myBooks);

printf("Adress of struct myBooks = %p\n", myBooks);
*/
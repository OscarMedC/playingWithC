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

void book_add_new(struct book* newBook) {
	printf("Enter the name of the book you want too add: ");
	fgets(newBook->name, 50, stdin);

	printf("\nEnter the name of the books author: ");
	fgets(newBook->author, 50, stdin);

	printf("\nEnter the books genre: ");
	fgets(newBook->genre, 50, stdin);

	printf("\nEnter the year the book was published: ");
	scanf_s("%d", &newBook->publYear);

	printf("\nNew book added!\n");
}

void print_book(struct book printBook) {
	printf("\nBook:\n");
	printf("-----\n");
	printf("%s", printBook.name);
	printf("%s", printBook.author);
	printf("%s", printBook.genre);
	printf("%d\n", printBook.publYear);
}

struct book* add_new_book(struct book* newBook) {

	newBook = malloc(sizeof(struct book));

	printf("The address of the allocated memory is: %p\n", newBook);

	book_add_new(newBook);

	return newBook;
}

void carddeck_initialize(struct cardDeck* cards) {
	for (int i = 0; i < MAX_SUITS; i++) {
		cards->deck[0][i] = i;
		for (int j = 0; j < MAX_RANKS; j++) {
			cards->deck[i][j] = j;
		}
	}
}

void deck_print(struct cardDeck cards) {
	for (int i = 0; i < MAX_SUITS; i++) {
		for (int j = 0; j < MAX_RANKS; j++) {
			printf("%d ", cards.deck[i][j]);
		}
		printf("\n");
	}
}

void deck_shuffle(struct cardDeck* cards) {

	time_t t;

	srand(time(&t));

	for (int i = 0; i < MAX_RANKS; i++) {
		int swap = 0;
		int temp = 0;
		swap = rand() % MAX_RANKS;
		temp = cards->deck[0][i];
		cards->deck[0][i] = cards->deck[0][swap];
		cards->deck[0][swap] = cards->deck[0][temp];
	}
}

void randTest() {
	time_t t;

	srand(time(&t));

	for (int i = 0; i < 5; i++) {
		printf("%d\n", rand() % 10);
	}
}
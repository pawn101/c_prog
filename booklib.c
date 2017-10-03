// This program contains an implementation of the example given in
// "Programozzunk C nyelven!" Section 3.7.5.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 100

struct book {
	char * title;
	char * author;
	int date;
	double price;
};

void fillbooklib(struct book *booklib)
{
        int k;
        // Initializing RNG
        srand(time(NULL));
        for (k = 0; k < N; k++) {
               sprintf(booklib[k].title, "Title %d", k);
               sprintf(booklib[k].author, "Author %d", k);
               booklib[k].date = rand() % 628;
               booklib[k].price = rand() / 1356.11;

        }
        return;
}

void searchbooklib(struct book *resultlib, struct book *booklib);

int main(void)
{

	int k;
	int num_match;
	struct book *booklib[N];
	struct book *resultlib[N];
	for (k = 0; k < N; k++) {
		booklib[k] = malloc(sizeof(struct book));
		resultlib[k] = malloc(sizeof(struct book));
		if (0 == booklib[k] || 0 == resultlib[k]) {
			printf("Error! Not enough memory!\n");
			exit(-1);
		}
	}
	// Part 2: Filling booklib
	
	// Part 3: Searching in booklib, filling resultlib
	for (k = 0; k < N; k++) {
		free(booklib[k]);
		free(resultlib[k]);
	}
	return 0;
}

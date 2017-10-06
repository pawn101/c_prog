// This program contains an implementation of the example given in
// "Programozzunk C nyelven!" Section 3.7.5.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 100

struct book {
	char title[40];
	char author[40];
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
               booklib[k].price = rand() / 1000356.11;
               //printf("%lf\n", booklib[k].price);
        }
        return;
}

int searchbooklib(struct book *resultlib, struct book *booklib, int num_match)
{
        int k = 0;
        num_match = 0; 
        for (k = 0; k < N; k++) {
                if (booklib[k].price >= 100 && booklib[k].price < 200) {
                        resultlib[num_match] = booklib[k];
                        num_match++;
                }
        //printf("num_match = %d\n", num_match);
        }
        return num_match;
}

void printbooklib(struct book *booklib, int M)
{
        int k = 0;
        for (k = 0; k < M; k++) {
                printf("Title: %s\nAuthor: %s\nDate: %d\nPrice: %lf\n\n", 
                                booklib[k].title, booklib[k].author, 
                                booklib[k].date, booklib[k].price);
        }
        return;
}

int main(void)
{

	int k;
	int num_match;
	struct book booklib[N];
	struct book resultlib[N];
	// Part 2: Filling booklib
    fillbooklib(booklib);	
	// Part 3: Searching in booklib, filling resultlib
    num_match = searchbooklib(resultlib, booklib, num_match);
    //printf("num_match = %d\n", num_match);
    // Printing the results
    if (0 == num_match) {
            printf("No matches found!\n");
    }
    else printbooklib(resultlib, num_match);
	return 0;
}

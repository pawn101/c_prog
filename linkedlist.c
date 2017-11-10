#include <stdio.h>
#include <stdlib.h>

struct node {
        int val;
        struct node * next;
};

int main(void)
{ 
        struct node * head = NULL;
        if (head == NULL) {
                return 1;
        }
        head->val = 1;
        head->next = NULL;
        return 0;
}

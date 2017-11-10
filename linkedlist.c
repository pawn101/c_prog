#include <stdio.h>
#include <stdlib.h>

struct node {
        int val;
        struct node * next;
};

void print_list(struct node * head)
{
        struct node * current = head;
        while (current != NULL) {
                printf("%d\n", current->val);
                current = current->next;
        }
        return;
}

void push(struct node * head, int val)
{
        struct node * current = head;
        while(current->next != NULL) {
                current = current->next;
        }
        current->next = malloc(sizeof(struct node));
        current->next->val = val;
        current->next->next = NULL;
        return;
}
//The push function comes now

int main(void)
{ 
        struct node * head = NULL;
        head = malloc(sizeof(struct node));
        if (head == NULL) {
                return 1;
        }
        head->val = 1;
        head->next = NULL;
        return 0;
}

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

//reason for using double pointer: https://stackoverflow.com/questions/7271647/what-is-the-reason-for-using-a-double-pointer-when-adding-a-node-in-a-linked-lis
void push_head(struct node ** head, int val)
{
        struct node * new_node;
        new_node = malloc(sizeof(struct node));
        new_node->val = val;
        new_node->next = *head;
        *head = new_node;
        return;
}

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

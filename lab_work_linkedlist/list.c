#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void init(struct node** list) {
    (*list)=NULL;
}

void append(struct node** list, int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode){
    	newnode->data = data;
    	newnode->next = NULL;
    }
    else{
	    return;
    }

    if ((*list) == NULL) {
        (*list) = newnode;
    } else {
        struct node* current =(* list);
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newnode;
    }
}

void traverse(struct node* list) {
    struct node* current = list;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int is_palindrome(struct node* list) {
    struct node* slow = list;
    struct node* fast = list;
    struct node* prev = NULL;
    struct node* next;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;

        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    if (fast != NULL) {
        slow = slow->next;
    }

    while (prev != NULL && slow != NULL) {
        if (prev->data != slow->data) {
            return 0; // Not a palindrome
        }
        prev = prev->next;
        slow = slow->next;
    }

    return 1; // Palindrome
}

void remove_duplicates(struct node** list) {
    struct node* current = (*list);
    struct node* runner;
    struct node* temp;

    while (current != NULL) {
        runner = current;

        while (runner->next != NULL) {
            if (current->data == runner->next->data) {
                temp = runner->next;
                runner->next = runner->next->next;
                free(temp);
            } else {
                runner = runner->next;
            }
        }

        current = current->next;
    }
}

/*
void reverse_even(struct node** list) {
    struct node* current = (*list);
    struct node* prev = NULL;
    struct node* next = NULL;

    while (current != NULL) {
        if (current->data % 2 == 0) {
            struct node* temp = current;
            while (temp != NULL && temp->data % 2 == 0) {
                next = temp->next;
                temp->next = prev;
                prev = temp;
                temp = next;
            }

            if (prev != NULL) {
                // Adjust the pointers if the sequence was reversed
                if (current == (*list)) {
                   (* list) = prev;
                } else {
                    struct node* tempHead = (*list);
                    while (tempHead->next != current) {
                        tempHead = tempHead->next;
                    }
                    tempHead->next = prev;
                }

                current->next = next;
                current = prev;
            }
        }

        // Move to the next node
        prev = current;
        current = current->next;
    }
}
*/




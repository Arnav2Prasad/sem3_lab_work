#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

typedef node *list;

void init(list *head) {
    *head = NULL;
}

void append(list *head, int data) {
    node *nn = (node *)malloc(sizeof(node));
    if (nn == NULL) {
        return;
    } else {
        nn->data = data;
        nn->next = NULL;
    }
    if (*head == NULL) {
        *head = nn;
    } else {
        node *p = *head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = nn;
        nn->next = NULL;
    }
}

void Insert_Beg(list *head, int data) {
    node *nn = (node *)malloc(sizeof(node));
    if (nn == NULL) {
        return;
    } else {
        nn->data = data;
        nn->next = NULL;
    }
    if (*head == NULL) {
        *head = nn;
    } else {
        nn->next = *head;
        *head = nn;
    }
}

int is_Palindrome(list *head) {
    list head1 = NULL;
    node *p = *head;
    while (p != NULL) {
        Insert_Beg(&head1, p->data);
        p = p->next;
    }

    p = *head;
    node *q = head1;
    while (q != NULL && p != NULL) {
        if (p->data != q->data) {
            return 0;
        }
        p = p->next;
        q = q->next;
    }
    return 1;
}

void remove_duplicates(list *head) {
    node *p = *head;
    while (p != NULL) {
        node *q = p->next;
        node *prev = p;

        while (q != NULL) {
            if (p->data == q->data) {
                prev->next = q->next;
                free(q);
                q = prev->next;
            } else {
                prev = q;
                q = q->next;
            }
        }
        p = p->next;
    }
    return;
}



void reverse_even(list* head) {
    struct node* current = (*head);
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
                if (current == (*head)) {
                    (*head) = prev;
                } else {
                    struct node* tempHead = (*head);
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


void display(list *head) {
    node *p = *head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    list L1;
    init(&L1);
    append(&L1, 10);
    append(&L1, 20);
    append(&L1, 40);
    append(&L1,23);
    append(&L1, 60);
    append(&L1, 30);

    
    if (is_Palindrome(&L1)) {
        printf("The linked list is a palindrome.\n");
    } else {
        printf("The linked list is not a palindrome.\n");
    }

    
    remove_duplicates(&L1);
    printf("Linked list after removing duplicates: ");
    display(&L1);

    
    reverse_even(&L1);
    printf("Linked list after reversing even elements: ");
    display(&L1);

    return 0;
}

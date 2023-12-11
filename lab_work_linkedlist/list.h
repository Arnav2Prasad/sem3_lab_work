struct node {
    int data;
    struct node* next;
};


void init(struct node** list);
void append(struct node** list, int data);
void traverse(struct node* list);
void reverse_even(struct node** list);
int is_palindrome(struct node* list);
void remove_duplicates(struct node** list);

#include "list.c"

int main() {
    struct node* L1;

    init(&L1);

    append(&L1, 1);
    append(&L1, 2);
    append(&L1, 3);
    append(&L1, 2);
    append(&L1, 1);

	traverse(L1);
    if (is_palindrome(L1)) {
        printf("List L1 is a palindrome.\n");
    } else {
        printf("List L1 is not a palindrome.\n");
    }

    reverse_even(&L1);

    printf("List L1 after reversing even integers: ");
    traverse(L1);

    printf("List L1 before removing duplicates: ");
    traverse(L1);

    remove_duplicates(&L1);

    printf("List L1 after removing duplicates: ");
    traverse(L1);

    return 0;
}

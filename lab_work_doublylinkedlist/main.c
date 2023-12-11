#include "list.c"

int main(){
	struct list head;
	init(&head);

	ascii_of(&head,'A');

	display(head);

	destroy(&head);

	printf("---\n");

	display(head);

	return 0;
}


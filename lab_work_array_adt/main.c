#include "list.c"

int main(){
	struct array* arnav;

	init(&arnav,10);

	printf("IsEmpty : %d\n",isEmpty(arnav));
	printf("IsFull : %d\n",isFull(arnav));

	append(&arnav,1);
	append(&arnav,4);
	append(&arnav,8);
	append(&arnav,9);
	append(&arnav,12);
	append(&arnav,15);

	printf("Display : ");
	display(arnav);

	insert_at_index(&arnav,2,100);

	printf("Display : ");
        display(arnav);

        insert_at_index(&arnav,4,300);

	printf("Display : ");
        display(arnav);

	printf("IsEmpty : %d\n",isEmpty(arnav));
        printf("IsFull : %d\n",isFull(arnav));
	
	remove_at_index(&arnav,2);
        remove_at_index(&arnav,4);

	printf("Display : ");
        display(arnav);

	printf("Max : %d\n",max(arnav));
	printf("MIN : %d\n",min(arnav));

	reverse(&arnav);
	printf("Display : ");
        display(arnav);

	printf("-------------\n");


	//struct array* a2; //= malloc(sizeof(array));
	struct array* a2=malloc(sizeof(struct array));
	init(&a2,50);


	append(&a2,10);
	append(&a2,60);
	append(&a2,70);
	append(&a2,80);

	struct array* ans = (struct array*)malloc(sizeof(struct array));
	init(&ans,100);
	merge(arnav,a2,&ans);

	printf("Display Merged Array : ");
        display(ans);


	return 0;
}
	


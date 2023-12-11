typedef struct array{
	int* arr;
	int size;
	int count;
}array;

void init(struct array** arnav,int size);
int isEmpty(struct array* arnav);
int isFull(struct array* arnav);
void append(struct array** arnav,int data);
void insert_at_index(struct array** arnav,int idx,int data);
void remove_at_index(struct array** arnav,int idx);
void display(struct array* arnav);
int max(struct array* arnav);
int min(struct array* arnav);
void reverse(struct array** arnav);
void merge(struct array* arnav,struct array* a2,struct array** ans);


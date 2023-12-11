typedef struct node{
	struct node* next;
	struct node* prev;
	int data;
}node;

typedef struct list{
	struct node* front;
	struct node* tail;
}list;

void init(struct list* head);
void append(struct list* head,int data);
void display(struct list head);
void destroy(struct list* head);
int char_to_asci(char data);
int rev(int data);
void ascii_of(struct list* head,char ch);


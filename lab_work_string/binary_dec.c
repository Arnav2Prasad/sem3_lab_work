#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int d;
    struct node* next;
    struct node* prev;

}node;
typedef node* list;

void init(list* head, list* tail)
{
    *head=NULL;
    *tail=NULL;
}
void append(list *head,list* tail, int d)
{
    node* nn=NULL;
    nn=(node*)malloc(sizeof(node));
    if(nn)
    {
        nn->d=d;
        nn->next=NULL;
        nn->prev=NULL;
    }
    else 
    {
        return;
    }

    if(*head==NULL && *tail==NULL)
    {
        *head=nn;
        *tail=nn;
        return;
    }
    node* p=*tail;
    p->next=nn;
    nn->prev=p;
    *tail=nn;
}



void display(list* tail)
{
    node* p=*tail;
    while(p)
    {
        printf("%d", p->d);
        p=p->prev;
    }
}


int main()
{
    int m;
    printf("\nEnter the number whose binary representation is needed\n");
    scanf("%d", &m);
    list h,t;
    init(&h,&t);
    while(m!=0)
    {
        int d=m%2;
        append(&h,&t,d);
        m=m/2;
    }
    
    display(&t);

    return 0;

}

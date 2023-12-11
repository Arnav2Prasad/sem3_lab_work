#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "list.h"

void init(struct list* head){
	head->front=NULL;
	head->tail=NULL;
	return;
}

void append(struct list* head,int data){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	if (temp){
		temp->data=data;
		temp->next=NULL;
		temp->prev=NULL;
	}
	else{
		return;
	}
	if (head->front==NULL && head->tail==NULL){
		head->front=temp;
		head->tail=temp;
		return;
	}
	head->tail->next=temp;
	temp->prev=head->tail;
	head->tail=temp;
	return;
}

void display(struct list head){
	if (head.front==NULL && head.tail==NULL){
		printf("NULL\n");
		return;
	}
	struct node* curr=head.front;
	while (curr != NULL){
		printf("%d ->",curr->data);
		curr=curr->next;
	}
	printf("NULL\n");
	return;
}
void destroy(struct list* head){
	if (head->front==NULL && head->tail==NULL){
		return;
	}
	struct node* curr=head->front;
	while (curr->next != NULL){
		struct node* del=curr;
		curr=curr->next;
		free(del);
	}
	//free(curr);
	head->front=NULL;
	head->tail=NULL;
	return;
}

int char_to_asci(char ch){
	return (int)ch;
}

int rev(int data){
	int i=0;
	int x=data;
	int ans=0;
	while (data != 0){
		ans =(ans*10) + data%10;
	       	data=(int)data/10;
	}
	return ans;
}

void ascii_of(struct list* head,char ch){
	int data=char_to_asci(ch);
	data=rev(data);
	int x=data;
	while (data != 0){
		int a=data%10;
		data=(int)data/10;
		append(head,a);
	}
	return;
}






#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "list.h"

void init(struct array** a,int size){
	(*a)->size=size;
	(*a)->count=0;
	(*a)->arr=(int *)malloc(sizeof(int)*size);
	return;
}

int isEmpty(struct array* arnav){
	return arnav->count==0;
}

int isFull(struct array* arnav){
	return arnav->size==arnav->count+1;
}

void append(struct array** arnav,int data){
	if (isFull(*arnav)){
		return;
	}
	(*arnav)->arr[(*arnav)->count++]=data;
	return;
}

void insert_at_index(struct array** arnav,int idx,int data){
	if (isFull(*arnav)){
		return;
	}
	for (int i=(*arnav)->count;i>=idx;i--){
		(*arnav)->arr[i+1]=(*arnav)->arr[i];
	}
	(*arnav)->arr[idx]=data;
	(*arnav)->count++;
	return;
}

void remove_at_index(struct array** arnav,int idx){
	if (isEmpty(*arnav)){
		return;
	}
	for (int i=idx;i<(*arnav)->count;i++){
		(*arnav)->arr[i]=(*arnav)->arr[i+1];
	}
	(*arnav)->count--;
	return;
}

void display(struct array* arnav){
	if (isEmpty(arnav)){
		return;
	}
	for (int i=0;i<arnav->count;i++){
		printf("%d ",arnav->arr[i]);
	}
	printf("\n");
	return;
}

int max(struct array* arnav){
	if (isEmpty(arnav)){
		return INT_MIN;
	}
	int ans=INT_MIN;
	for (int i=0;i<arnav->count;i++){
		if (ans<arnav->arr[i]){
			ans=arnav->arr[i];
		}
	}
	return ans;
}

int min(struct array* arnav){
        if (isEmpty(arnav)){
                return INT_MIN;
        }
        int ans=INT_MAX;
        for (int i=0;i<arnav->count;i++){
                if (ans>arnav->arr[i]){
                        ans=arnav->arr[i];
                }
        }
        return ans;
}


void reverse(struct array** arnav){
	if (isEmpty(*arnav)){
		return;
	}
	int start=0;
	int end=(*arnav)->count-1;
	while (start<end){
		int temp=(*arnav)->arr[start];
		(*arnav)->arr[start]=(*arnav)->arr[end];
		(*arnav)->arr[end]=temp;
		start++;
		end--;
	}
	return;
}

void merge(struct array* a1,struct array* a2,struct array** ans){
	
	for (int i=0;i<a1->count;i++){
		(*ans)->arr[i]=a1->arr[i];
		(*ans)->count++;
	}
	for (int j=0;j<a2->count;j++){
		(*ans)->arr[(*ans)->count++]=a2->arr[j];
	}
}




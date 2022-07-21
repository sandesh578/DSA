#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*top=NULL;

void push(int key){
	struct Node *temp=NULL;
	temp=(struct Node *)malloc(sizeof(struct Node));
	temp->data=key;
	temp->next=NULL;
    if(top==NULL){
    	top=temp;
	}else{
		temp->next=top;
        top=temp;
	}
}

int pop(int key){
 int delData;
 if(top==NULL){
 	printf("Stack is Empty\n");
 }
 else{
 	delData=top->data;
 	top=top->next;
 }
 return delData;
}

int isEmpty(){
	return top==NULL;
}

void print(){
	printf("\nElements in stack are:\n");
	struct Node *temp;
	temp=top;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

int main(){
	if(isEmpty()){
		printf("Stack is empty\n");
	}
	push(5);
	push(8);
	push(9);
	push(3);
	print();
	int d=pop(5);
	printf("\n\n%d is deleted\n",d);
	print();
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*front=NULL,*rear=NULL;

int enqueue(int key){
	struct Node *temp;
	temp=(struct Node *)malloc(sizeof(struct Node));
	temp->data=key;
	
	if(front==NULL){
		front=rear=temp;
		front->next=NULL;
		rear->next=NULL;
	}
	else{
		rear->next=temp;
		rear=temp;
		rear->next=NULL;
	}
}

int dequeue(int key){
	int delData;
	if(front==NULL){
		printf("Queue is empty");
	}else{
		delData=front->data;
		front=front->next;
	}
	return delData;
}

void display(){
	struct Node *temp;
	if(front==NULL){
		printf("Queue is empty");
	}
	else{
		temp=front;
		printf("\nElements in Queue are:\n");
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}

int isEmpty(){
	return front==NULL;
}

int main(){
	if(isEmpty()){
		printf("Stack is empty\n");
	}
	enqueue(5);
	enqueue(6);
	enqueue(7);
	enqueue(8);
	display();
	int d=dequeue(8);
	printf("\n%d is deleted\n",d);
	display();
	return 0;
}

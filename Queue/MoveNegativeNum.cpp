#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void moveNegative(int *arr,int n){
   int j=0;
   for(int i=0;i<n;i++){
   	if(arr[i]<0){
   		if(i!=j)
          swap(&arr[i],&arr[j]);
          j++;
	   }
   }	
}

int main(){
	int arr[10],n;
	printf("Enter the number of elements in an array:");
	scanf("%d",&n);
	printf("Enter %d elements to an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n\nArray before moving negative numbers:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	moveNegative(arr,n);
	printf("\n\nArray after moving negative numbers:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

void reverseArray(int *arr,int n){
	int start=0,end=n-1;
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int arr[10],n;
	printf("Enter number of elements to be inserted to an array:");
	scanf("%d",&n);
	printf("Enter %d elements to an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray before reversal is:\n");
	print(arr,n);
	reverseArray(arr,n);
	printf("\nArray after reversal is:\n");
	print(arr,n);
	return 0;
}

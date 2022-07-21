#include<stdio.h>

int main(){
	int n,temp;
	printf("Enter number of elements in an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements in an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nElements in an array before swapping:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	for(int i=0;i<n;i+=2){
		if(n%2!=0&&i==n-1){
			break;
		}
		temp=arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=temp;
	}
	printf("\nElements in an array after swapping:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

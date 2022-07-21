#include<stdio.h>
#include<stdlib.h>

void SumOfMaxAndMinElement(int arr[],int n){
	int max,min;
	max=min=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}else if(arr[i]>max){
			max=arr[i];
		}
	}

	printf("\nMaximum Sum is %d\nMax and Min elements are %d and %d respectively\n",max+min,max,min);

}

int main(){
	int n,sum;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d number of elements:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	SumOfMaxAndMinElement(arr,n);
	return 0;
}

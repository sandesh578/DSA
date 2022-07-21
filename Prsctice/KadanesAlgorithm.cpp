//Kadanes Algorithm
#include<stdio.h>
#include<stdlib.h>

int max(int a,int b){
	return a>b?a:b;
}

int KadanesAlgorithm(int arr[],int n){
	int max_current=0,max_global;
	max_global=arr[0];
	for(int i=0;i<n;i++){
		max_current=max(arr[i],max_current+arr[i]);
		if(max_current>max_global){
			max_global=max_current;
		}
	}
	return max_global;
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
	sum=KadanesAlgorithm(arr,n);
	printf("\nMaximum sum is: %d\n",sum);
	return 0;
}

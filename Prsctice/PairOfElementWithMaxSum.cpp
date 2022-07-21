#include<stdio.h>
#include<stdlib.h>

void PairOfElementWithMaxSum(int arr[],int n){
	int fm,sm;//firstmax and secondmax
	fm=sm=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>fm){
			sm=fm;
			fm=arr[i];
		}else if(arr[i]>sm){
			sm=arr[i];
		}
	}

	printf("\nPair Of Elements With Maximum Sum in an array are %d and %d\nMaximum Sum is %d\n",fm,sm,fm+sm);

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
	PairOfElementWithMaxSum(arr,n);
	return 0;
}

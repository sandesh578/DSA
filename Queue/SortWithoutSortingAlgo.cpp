#include<stdio.h>
#include<stdlib.h>

void sortArray(int *arr,int n){
	int countOne=0,countTwo=0,countZero=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			countZero++;
		}
		if(arr[i]==1){
			countOne++;
		}
		if(arr[i]==2){
			countTwo++;
		}
	}
	
	for(int i=0;i<countZero;i++){
		arr[i]=0;
	}
	
	for(int i=countZero;i<(countOne+countZero);i++){
		arr[i]=1;
	}
	
	for(int i=(countOne+countZero);i<(countOne+countZero+countTwo);i++){
		arr[i]=2;
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
	printf("\n\nArray before sorting:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	sortArray(arr,n);
	printf("\n\nArray after sorting:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

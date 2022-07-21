#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[10],n;
	printf("Enter number of elements to be inserted to an array:");
	scanf("%d",&n);
	printf("Enter %d elements to an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

    int max=arr[0],min=arr[n-1];
    for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	printf("\nMaximum element of array is %d\n",max);
	printf("\nMimimum element of array is %d\n",min);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void OddEvenDescAsc(int arr[],int n){
	int l=0,h=n-1;
	while(l<h){
		while(arr[l]%2!=0){
			l++;
		}
		while(arr[h]%2==0){
			h--;
		}
		if(l<h){
			swap(&arr[l],&arr[h]);
		}
	}
    
	printf("\nThe Elements in an array are:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

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
	OddEvenDescAsc(arr,n);
	return 0;
}

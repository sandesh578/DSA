#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int *arr,int n){
   for(int i=0;i<n-1;i++){
   	for(int j=i+1;j<n-i-1;j++){
   		if(arr[j]<arr[i]){
   			int temp=arr[i];
   		    arr[i]=arr[j];
   		    arr[j]=temp;
		   }
	   }
   }	
}

int main(){
	int arr[10],n,Kmax,Kmin,max,min,count=0;
	printf("Enter number of elements to be inserted to an array:");
	scanf("%d",&n);
	printf("Enter %d elements to an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

    printf("\nEnter the kth position for max element:");
    scanf("%d",&Kmax);
    printf("\nEnter the kth position for min element:");
    scanf("%d",&Kmin);
    
    BubbleSort(arr,n);
    
    for(int i=n-1;i>=0;i--){
		count++;
		if(count==Kmax){
			max=arr[i];
			break;
		}
	}
	
	count=0;
	for(int i=0;i<n;i++){
		count++;
		if(count==Kmin){
			min=arr[i];
			break;
		}
	}
	
	printf("\nMaximum element of array is %d\n",max);
	printf("\nMimimum element of array is %d\n",min);
	return 0;
}

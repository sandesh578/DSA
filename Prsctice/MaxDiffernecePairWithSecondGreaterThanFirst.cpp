#include<stdio.h>
#include<stdlib.h>

void MaximumDifferencePair(int arr[],int n){
	int maxdiff=0,cdiff,last,min;
    min=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}else {
			cdiff=arr[i]-min;
			if(cdiff>maxdiff){
				maxdiff=cdiff;
				last=i;
			}
		}
	}

	printf("\nPair Of Elements With Maximum Difference where 2nd element is greater than first in an array are %d and %d\n",arr[last-1],arr[last]);
	printf("\nMaximum Difference is %d\n",maxdiff);

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
	MaximumDifferencePair(arr,n);
	return 0;
}

//LongestIncreasingContinuousSubarray
#include<stdio.h>
#include<stdlib.h>

void LongestIncreasingContinuousSubArray(int arr[],int n){
	int maxlen=0,l=1,last;
	for(int i=1;i<n;i++){
		if(arr[i-1]<arr[i]){
			l++;
		}else{
			if(l>maxlen){
				maxlen=l;
				last=i;
				l=1;
			}
		}
	}
	
	if(l>maxlen){
		maxlen=l;
	}

	printf("\nLongest Increasing Continuous Subarray is:\n");
	for(int i=last-maxlen;i<last;i++){
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
	LongestIncreasingContinuousSubArray(arr,n);
	return 0;
}

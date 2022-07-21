#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==0){
		printf("\n%d is a prime number\n",n);
	}else{
		printf("\n%d is not a prime number\n",n);
	}
	return 0;
}

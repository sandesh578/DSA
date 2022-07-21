#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,flag=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(int i=1;i<n/2;i++){
		if(i*i==n){
			flag=1;
		}
		if(flag==1){
			break;
		}
	}
	if(flag==1){
		printf("\n%d is a perfect square\n",n);
	}else{
		printf("\n%d is not a perfect square\n",n);
	}
	return 0;
}

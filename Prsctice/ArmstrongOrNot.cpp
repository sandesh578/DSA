#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,num,arm=0,rem=0;
	printf("Enter the number:");
	scanf("%d",&n);
	num=n;
    while(n){
    	rem=n%10;
    	arm+=rem*rem*rem;
    	n=n/10;
	}
	
	if(num==arm){
		printf("\n%d is a armstrong number\n",num);
	}else{
		printf("\n%d is not a armstrong number\n",num);
	}
	return 0;
}

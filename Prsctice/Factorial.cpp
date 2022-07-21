#include<stdio.h>

int fact(int n){
	if(n==0){
		return 1;
	}else{
		return n*fact(n-1);
	}
}
int main(){
	int n,factorial=1;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Factorial of a %d using recursion is: %d\n",n,fact(n));
	
	for(int i=n;i>=1;i--){
		factorial=factorial*i;
	}
	printf("Factorial of a %d using iteraton is: %d\n",n,factorial);
	return 0;
}

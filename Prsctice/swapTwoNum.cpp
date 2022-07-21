#include<stdio.h>
#include<stdlib.h>

void swapWithoutUsingThirdVariable(int *a,int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}

int main(){
	int num1,num2,temp;
	printf("Enter two numbers:\n");
	scanf("%d%d",&num1,&num2);
	printf("Elements before swapping:\nnum1=%d num2=%d\n",num1,num2);
	
	temp=num1;
	num1=num2;
	num2=temp;
	
    printf("Elements after swapping using third variable:\nnum1=%d num2=%d\n",num1,num2);
    swapWithoutUsingThirdVariable(&num1,&num2);
	printf("Elements after swapping without using third variable:\nnum1=%d num2=%d\n",num1,num2);
	return 0;
}

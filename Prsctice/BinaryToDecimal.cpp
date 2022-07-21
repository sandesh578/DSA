#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n,pos1,pos2,dec=0,num,i=0;
	printf("Enter a binary number:");
	scanf("%d",&n);
    num=n;
    while(n){
    	dec+=(n%10)*pow(2,i);
    	n=n/10;
    	i++;
	}
    printf("\nDecimal number of %d is %d \n",num,dec);
	return 0;
}

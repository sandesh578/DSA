#include<stdio.h>
#include<stdlib.h>

int Binary(int n){
	int bin=0,i=1;
	while(n){
		bin+=(n%2)*i;
		n=n/2;
		i*=10;
	}
	return bin;
}

int main(){
	int n,pos1,pos2,num,bin[10],i=0;
	printf("Enter a decimal number:");
	scanf("%d",&n);
    num=n;
    while(n){
    	bin[i]=n%2;
    	n=n/2;
    	i++;
	}
    printf("\nBinary number of %d is: ",num);
	for(int j=i-1;j>=0;j--){
		printf("%d",bin[j]);
	}
	
	printf("\nBinary number of %d is: %d\n",num,Binary(num));
	return 0;
}

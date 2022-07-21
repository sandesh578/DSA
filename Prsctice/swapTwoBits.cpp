#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int swapTwoBits(int n,int p1,int p2){
	n^=1<<p1;
	n^=1<<p2;
	return n;
}

int main(){
	int n,pos1,pos2,num,bin[10],i=0,temp,b=0,dec,j=0;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter two positions for swapping bits:\n");
	scanf("%d%d",&pos1,&pos2);
    num=n;
    while(n){
    	bin[i]=n%2;
    	n=n/2;
    	i++;
	}

    temp=bin[pos1];
    bin[pos1]=bin[pos2];
    bin[pos2]=temp;
	
	for(int j=i-1;j>=0;j--){
		b=b*10+bin[j];
	}

	while(b){
    	dec+=(b%10)*pow(2,j);
    	b=b/10;
    	j++;
	}
	
	printf("\nNumber after swapping two bits is %d\n",dec);
	printf("\nNumber after swapping two bits is %d\n",swapTwoBits(num,pos1,pos2));
	return 0;
}

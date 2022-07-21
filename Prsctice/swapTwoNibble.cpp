#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int swapTwoNibble(int x){
	//x & 0x0F gives last 4 bits of x
	//x & 0xF0 gives first 4 bits of x
	return ((x & 0x0F)<<4|(x & 0xF0)>>4);
}
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);

	printf("\nNumber after swapping two bits is %d\n",swapTwoNibble(num));
	return 0;
}

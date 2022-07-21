#include<stdio.h>

int palindrome(int n){
	static int rev=0;
	if(n==0){
		return rev;
	}else{
		rev=rev*10+n%10;
		return palindrome(n/10);
	}
}

int Palindrome(int n){
	int rev=0,num=n;
	while(n){
		rev=rev*10+n%10;
		n=n/10;
	}
	if(num==rev){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int n,p,x;
	printf("Enter the number:");
	scanf("%d",&n);
	
	p=Palindrome(n);
	
	if(p==1){
     	printf("%d is a palindrome Number\n",n);		
	}else{
     	printf("%d is not a palindrome Number.\n",n);		
	}

    x=palindrome(n);
	if(x==n){
     	printf("\n%d is a palindrome Number\n",n);		
	}else{
     	printf("\n%d is not a palindrome Number.\n",n);		
	}
	return 0;
}

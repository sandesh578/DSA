#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char st[20],firstRepeated;
	int cnt=0,c,i,k=0;
	printf("Enter a string:");
	scanf("%s",st);
	for(i=0;i<strlen(st);i++){
		c=st[i]-97;
		if(!(cnt&1<<c)){
		  cnt=cnt|(1<<c);	
		}else{
		  firstRepeated=st[i];
		  break;	
		}
	}
	
	printf("\nThe first repeated character in a string is: %c\n",firstRepeated);

	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char st[20];
	int cnt=0,c,i,k=0;
	printf("Enter a string:");
	scanf("%s",st);
	for(i=0;i<strlen(st);i++){
		c=st[i]-97;
		if(!(cnt&1<<c)){
		  st[k]==st[i];
		  cnt=cnt|(1<<c);
		  k++;	
		}
	}
	
	printf("\nThe string after removal of duplicate characters is:\n");
	for(i=0;i<strlen(st);i++){
	  printf("%c",st[i]);
	}
	return 0;
}

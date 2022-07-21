#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char st[20],st1[20];
	int cnt=0,c,i,k=0;
	printf("Enter a string:");
	scanf("%s",st);
	for(i=0;i<strlen(st);i++){
		if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'){
			continue;
		}else{
			st1[k]=st[i];
			k++;
		}
	}
	st1[k]='\0';
	
	printf("\nThe string after removal of vowels is:\n");
	for(i=0;i<strlen(st1);i++){
	  printf("%c",st1[i]);
	}
	return 0;
}

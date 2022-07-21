#include<stdio.h>

int main(){
	char str[20];
	int flag=0;
	printf("Enter a string:");
	scanf("%s",str);
	
	for(int i=0;str[i]!='\0';i++){
		if(!(str[i]>=65&&str[i]<=90)||!(str[i]>=97&&str[i]<=122)||!(str[i]>=48&&str[i]<=57)){
			flag=1;
		}
		if(flag==1){
			break;
		}
	}
	
	if(flag==0){
		printf("\n%s string is valid\n",str);
	}else{
		printf("\n%s string is not valid\n",str);
	}
	return 0;
}

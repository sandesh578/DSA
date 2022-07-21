#include<stdio.h>

int main(){
	char str[20],str1[20];
	int i,j;
	printf("Enter a string:");
	scanf("%s",str);
	
	printf("Enter another string:");
	scanf("%s",str1);
	
	for(i=0,j=0;str[i]!='\0'&&str1[i]!='\0';i++,j++){
		if(str[i]!=str1[i]){
		   break;
		}
   }
	
	if(str[i]==str1[j]){
		printf("\n%s and %s are equal\n",str,str1);
	}else if(str[i]<str1[j]){ 
		printf("\n%s is smaller than %s\n",str,str1);
	}else{
		printf("\n%s is greater than %s\n",str,str1);
	}
	return 0;
}

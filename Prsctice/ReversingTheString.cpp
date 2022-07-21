#include<stdio.h>
#include<string.h>

void ReverseString(char str[]){
	int i=0,j=strlen(str)-1,temp;
	while(i!=j){
	  temp=str[i];
	  str[i]=str[j];
	  str[j]=temp;
	  i++;
	  j--;
	}
	
	printf("\nReverse of string is %s\n",str);
}

int main(){
	char str[20],str1[20];
	int k=0;
	printf("Enter a string:");
	scanf("%s",str);
	
	for(int i=strlen(str)-1;i>=0;i--){
        str1[k]=str[i];
        k++;
	}
	str1[k]='\0';
	printf("\nReverse of %s is %s\n",str,str1);
	ReverseString(str);
	return 0;
}

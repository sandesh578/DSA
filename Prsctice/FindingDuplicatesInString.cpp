#include<stdio.h>

void DuplicatesChar(char str[]){
	int arr[25]={0};
	for(int i=0;str[i]!='\0';i++){
		if(str[i]>=97&&str[i]<=122){
			arr[str[i]-97]++;
		}
	}
	
	printf("\n\n");
	printf("Character\tFrequency\n");
	for(int i=0;i<25;i++){
		if(arr[i]>=2){
			printf("%c\t\t%d\n",i+97,arr[i]);
		}
	}
}

void DuplicateBitwise(char str[]){
	 long int h=0,x=0;
	 printf("\n\n");
	 for(int i=0;str[i]!='\0';i++){
	 	x=str[i]-97;
	 	if(!(h&1<<x)){
	 		h=h|1<<x;
		 }else{
		 	printf("%c is Duplicate\n",str[i]);
		 }
	 }
}

int main(){
	char str[20],str1[20];
	int k=0;
	printf("Enter a string:");
	scanf("%s",str);
	
	for(int i=0;str[i]!='\0';i++){
	  for(int j=i+1;str[j]!='\0';j++){
		if(str[i]==str[j]){
			str1[k]=str[i];
			k++;
		}
	  }	
	}
	str1[k]='\0';

    printf("Duplicate characters in string %s are : ",str);
	for(int i=0;str1[i]!='\0';i++){
		printf("%c ",str1[i]);
	}
	
	DuplicatesChar(str);
	DuplicateBitwise(str);
	return 0;
}

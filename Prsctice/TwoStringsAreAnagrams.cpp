#include<stdio.h>
#include<string.h>

void AnagramsOrNot(char str[],char str1[]){
	int cnt[25]={0},flag=0;
	for(int i=0;str[i]!='\0';i++){
		cnt[str[i]-97]++;
	}
	
	for(int j=0;str1[j]!='\0';j++){
		cnt[str1[j]-97]--;
	}/
	
	for(int j=0;j<=25;j++){
		if(cnt[j]<0){
			flag=1;
			break;
		}
	}

	if(flag==1){
		printf("\n%s and %s are not Anagrams\n",str,str1);
	}else{
		printf("\n%s and %s are Anagrams\n",str,str1);
	}
}

int main(){
	//ex observe-verbose, medical-decimal
	char str[20],str1[20];
	int i,j,flag=0;
	printf("Enter a string:");
	scanf("%s",str);
	
	printf("Enter another string:");
	scanf("%s",str1);
	
	if(strlen(str)==strlen(str1)){
	 for(i=0;str[i]!='\0';i++){
       for(j=0;str1[j]!='\0';j++){
       	 if(str[i]==str1[j]){
       	 	flag=1;
		 }
	   }
	   if(flag==0){
	   	break;
	   }
	 }
	}else{
	  flag=0;
	}
	
	
	if(flag==0){
		printf("\n%s and %s are not Anagrams\n",str,str1);
	}else{
		printf("\n%s and %s are Anagrams\n",str,str1);
	}
	
	AnagramsOrNot(str,str1);
	return 0;
}

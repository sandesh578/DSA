#include<stdio.h>
#include<string.h>

int PalindromeOrNot(char str[]){
	int i,j,flag=0;
	if(strlen(str)==1){
		flag=0;
	}
    else if(strlen(str)==2){
    	flag=str[0]==str[1]?0:1;
	}else{
	 for(i=0,j=strlen(str)-1;i!=j;i++,j--){
    	if(str[i]!=str[j]){
    		flag=1;
    		break;
		}
	 }
	}
   if(flag==0){
   	 return 1;
   }else{
   	 return 0;
   }
   
}

int main(){
	char str[20];
	int res;
	printf("Enter a string:");
	scanf("%s",str);

	res=PalindromeOrNot(str);
	if(res==1){
		printf("\n%s is palindrome string\n",str);
	}else{
		printf("\n%s is not a palindrome string\n",str);
	}
	return 0;
}

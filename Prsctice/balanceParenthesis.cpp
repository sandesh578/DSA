#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int top=-1;
char stack[MAX];

void push(char c){
	if(top==MAX){
		printf("Stack is full");
	}else{
		top++;
		stack[top]=c;
	}
}

char pop(){
	char c;
	if(top==-1){
		printf("Stack is empty");
	}else{
		c=stack[top];
		top--;
	}
	return c;
}

int isEmpty(){
   return top==-1;	
}

//void display(){
//	printf("\nElements in the stack are:\n");
//	for(int i=top;i>=0;i--){
//		printf("%c",stack[i]);
//	}
//}

int match(char a,char b)
{
        if(a=='[' && b==']')
                return 1;
        if(a=='{' && b=='}')
                return 1;
        if(a=='(' && b==')')
                return 1;
        return 0;
}

int main(){
    char exp[20],length;
    printf("Enter the expression:");
    scanf("%s",exp);
    length=strlen(exp);
    char temp;
    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
        	push(exp[i]);
		}
        if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
 	        if(isEmpty())
            {
                printf("Right parentheses are more than left parentheses\n");
                return 0;
            }
            else
            {
                temp=pop();
                if(!match(temp, exp[i]))
                {
                    printf("Mismatched parentheses are : ");
                    printf("%c and %c\n",temp,exp[i]);
                    return 0;
                }
            }
       }
    }
    if(isEmpty())
    {
        printf("Parentheses are balanced\n");
        return 1;
    }
    else
    {
        printf("Left parentheses more than right parentheses\n");
        return 0;
    }

//	display();
	return 0;
}

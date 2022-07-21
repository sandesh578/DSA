#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string S)
	{
	    for(int i=0,j=S.size()-1;i<j;i++,j--){
            if(S[i]!=S[j]){
               return 0; 
            }
        }
      return 1;
	}

  int main(){
  string str;
  cout<<"Enter a string: ";
  cin>>str;
  cout<<"Is string palindrome :"<<(isPalindrome(str)==1?"Yes":"No")<<endl;
  return 0; 
}
#include<bits/stdc++.h>
using namespace std;

string Reverse(string str){
   for(int i=0,j=str.size()-1;i<j;i++,j--){
     swap(str[i],str[j]);
   }
  return str;
}

int main(){
  string str;
  cout<<"Enter a string: ";
  cin>>str;
  cout<<"Reverse of string "<<str<<" is: "<<Reverse(str)<<endl;
  return 0; 
}
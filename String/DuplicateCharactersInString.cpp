#include<bits/stdc++.h>
using namespace std;

void DuplicateCharacters(string S)
	{
	   unordered_map<char,int> um;
     for(int i=0;i<S.size();i++){
       um[S[i]]++;
     }

     for(auto it=um.begin();it!=um.end();it++){
       if(it->second>1){
         cout<<it->first<<"->"<<it->second<<endl;
       }
     }
	}

  int main(){
  string str;
  cout<<"Enter a string: ";
  cin>>str;
  cout<<"Count of duplicate elements :\n";
  DuplicateCharacters(str);
  return 0; 
}
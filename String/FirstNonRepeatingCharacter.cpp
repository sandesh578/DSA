#include<bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string A){
		    vector<int> v(26,0);
		    vector<char> ch;
		    string s="";
		    for(int i=0;i<A.size();i++){
		        if(!v[A[i]-'a']){
		            ch.push_back(A[i]);
		        }
		        v[A[i]-'a']++;
		        int f=0;
		        for(int j=0;j<ch.size();j++){
		            if(v[ch[j]-'a']==1){
		                s.push_back(ch[j]);
		                f=1;
		                break;
		            }
		        }
		        if(f==0){
		            s.push_back('#');
		        }
		        
		    }
		    return s;
		}

int main(){
  string str;
  cout<<"Enter a string: ";
  cin>>str;
  cout<<"First non repeating character of"<<str<<" is: "<<FirstNonRepeating(str)<<endl;
  return 0; 
}
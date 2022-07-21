#include<bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int> us(a1,a1+n);
    for(int i=0;i<m;i++){
        if(us.find(a2[i])==us.end()){
            return "No";
        }
    }
    return "Yes";
}
int main(){
  return 0;
}
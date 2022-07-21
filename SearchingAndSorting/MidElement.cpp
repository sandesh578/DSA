#include<bits/stdc++.h>
using namespace std;

int middle(int A, int B, int C){
       int ma=max(A,max(B,C));
       int mi=min(A,min(B,C));
       return A+B+C-ma-mi;
}

int mid(int A,int B,int C){
   priority_queue<int>pq;
       pq.push(A);
       pq.push(B);
       pq.push(C);
       
       pq.pop();
       return pq.top();
}

int main(){
  cout<<middle(123,57,992)<<endl;
  cout<<middle(123,578,992)<<endl;
  cout<<middle(12,57,992)<<endl;

  cout<<mid(123,57,992)<<endl;
  cout<<mid(123,578,992)<<endl;
  cout<<mid(12,57,992)<<endl;
  return 0;
}
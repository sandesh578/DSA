#include<bits/stdc++.h>
using namespace std;

int countSquares(int N) {
        int i=1;
        while(i*i<N){
            i++;
        }
        return i-1;
    }

int main(){
  int N;
  cout<<"Enter the elements uptowhich square are to be calculated: ";
  cin>>N;
  cout<<"Count of square elements is: "<<countSquares(N)<<endl;
  return 0;
}
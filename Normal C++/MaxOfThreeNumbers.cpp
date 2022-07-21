#include <iostream>

using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter three numbers:"<<endl;
  cin>>a>>b>>c;
  int max=a>b?(a>c?a:c):(b>c?b:c);
  cout<<"Max of three elements is "<<max<<endl;
  return 0;
}

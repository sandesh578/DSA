#include<bits/stdc++.h>
using namespace std;

vector<int,int> FourSum(int arr[],int n,int sum){
  
}

  int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  int sum;
  cout<<"Enter the sum to be equal:"<<endl;
  cin>>sum;
  vector<int,int> p=FourSum(arr,n,sum);
  cout<<"Four elements with sum "<<sum<<" are:  "<<endl;
  for(auto x:p){
    cout<<x<<" ";
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

int searchWhereDiffIsK(int arr[],int n,int diff,int target){
  int i=0;
  while(i<n){
    if(arr[i]==target){
      return i;
    }
    i=i+max(1,abs((arr[i]-target)/diff));
  }
  return -1;
}

  int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  int target;
  cout<<"Enter the target element to search: "<<endl;
  cin>>target;
  int diff;
  cout<<"Enter the difference between element:"<<endl;
  cin>>diff;
  int p=searchWhereDiffIsK(arr,n,diff,target);
  cout<<"Index of element "<<target<<" is: "<<p<<endl;
  return 0;
}
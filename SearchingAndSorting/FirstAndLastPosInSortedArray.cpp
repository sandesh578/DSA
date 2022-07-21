#include<bits/stdc++.h>
using namespace std;

pair<int,int> FirstAndLastPos(int arr[],int n,int ele){
  int first=-1,last=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==ele){
      first=i;
      break;
    }
  }
  
  for(int j=n-1;j>=0;j--){
    if(arr[j]==ele){
      last=j;
      break;
    }
  }
  pair<int,int> p({first,last});
  return p;
}
int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  int ele;
  cout<<"Enter the element to find its first and last index:"<<endl;
  cin>>ele;
  pair<int,int> p=FirstAndLastPos(arr,n,ele);
  cout<<"First and last index of element "<<ele<<" in array is: "<<p.first<<" "<<p.second<<endl;
  return 0;
}
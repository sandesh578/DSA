#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n, int target) {
	    int left=0;
      int right=n-1;
      while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
          return mid;
        }else if(arr[mid]>=arr[left]){
          if(target<=arr[mid]&&target>=arr[left]){
            right=mid-1;
          }else{
            left=mid+1;
          }
        }else{
          if(target>=arr[mid]&&target<=arr[right]){
            left=left+1;
          }else{
            right=mid-1;
          }
        }
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
  int p=search(arr,n,target);
  cout<<"Index of element "<<target<<" is: "<<p<<endl;
  return 0;
}
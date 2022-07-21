#include<bits/stdc++.h>
using namespace std;

void  MoveNegative(int arr[],int n){
  int low=0,high=n-1;
  while(low<high){
    if(arr[low]<0){
      low++;
    }
    if(arr[low]>0&&arr[high]<0){
      swap(arr[low],arr[high]);
      low++;
      high--;
    }
    if(arr[high]>0){
      high--;
    }
  }
}

void rearrange(int arr[],int n){
  int j=0;
  for(int i=0;i<n;i++){
    if(arr[i]<0){
      if(i!=j){
        swap(arr[i],arr[j]);
      }
      j++;
    }
  }
}

int main(){
	int arr[10],n,Kmax;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

  MoveNegative(arr,n);
  // rearrange(arr,n);
  cout<<"Elements in the array after moving negatives are:"<<endl;
  for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
  }
	return 0;
}
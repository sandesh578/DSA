#include<bits/stdc++.h>
using namespace std;

void Insert(int arr[],int n){
  int i=n;
  int temp=arr[n];
  while(i>1&&temp<arr[i/2]){
    arr[i]=arr[i/2];
    i=i/2;
  }
  arr[i]=temp;
}

void HeapSort(int arr[],int n){
  swap(arr[1],arr[n]);
  int i=1,j=i*2;
  while(j<n-1){
    if(arr[j+1]<arr[j]){
      j=j+1;
    }
    if(arr[j]<arr[i]){
      swap(arr[j],arr[i]);
      i=j;
      j=2*i;
    }else{
      break;
    }
  }
}

int main(){
  int arr[10],n;
	printf("Enter number of elements to be inserted to an array:");
	scanf("%d",&n);
	printf("Enter %d elements to an array:\n",n);
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
  for(int i=2;i<=n;i++){
    Insert(arr,i);
  }
  for(int i=n;i>=1;i--){
    HeapSort(arr,i);
  }
  for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
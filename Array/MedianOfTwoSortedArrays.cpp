#include<bits/stdc++.h>
using namespace std;

int MedianOfTwoSortedArray(int arr[],int n1,int arr1[],int n2){
  int arr2[n1+n2];
  int i=0,j=0,k=0;
  while(i<n1&&j<n2){
    if(arr[i]>arr1[j]){
      arr2[k++]=arr1[j++];
    }else if(arr[i]<arr1[j]){
      arr2[k++]=arr[i++];
    }else{
      arr2[k++]=arr[i++];
      j++;
    }
  }
  for(;i<n1;i++){
    arr2[k++]=arr[i];
  }
  for(;j<n2;j++){
    arr2[k++]=arr1[j];
  }
  if((n1+n2)%2==0){
    return (arr2[((n1+n2)/2)]+arr2[((n1+n2)/2)-1])/2;
  }else{
    return arr2[((n1+n2)/2)];
  }
}

int main(){
  int arr[10],n,n2,arr1[10];
	cout<<"Enter number of elements to be inserted to an array1:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array1:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  cout<<"Enter number of elements to be inserted to an array2:"<<endl;
	cin>>n2;
	cout<<"Enter "<<n2<<" elements to an array2:\n";
	for(int i=0;i<n2;i++){
		cin>>arr1[i];
	}
  
  cout<<"Median of two sorted array is: "<<MedianOfTwoSortedArray(arr,n,arr1,n2)<<endl;
  return 0;
}
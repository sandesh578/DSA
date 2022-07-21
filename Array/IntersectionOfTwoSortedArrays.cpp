#include<bits/stdc++.h>
using namespace std;

int Intersection(int arr[],int n1,int arr1[],int n2){
  unordered_set<int> us(arr,arr+n1);
  int count=0;
  for(int i=0;i<n2;i++){
    auto it=us.find(arr1[i]);
    if(it!=us.end()){
       count++;
    }
  }
  return count;
}

int doIntersection(int arr[],int n1,int arr1[],int n2){
  int i=0;
  int j=0,count=0;
  while(i<n1&&j<n2){
    if(arr[i]==arr[j]){
      count++;
      i++;
      j++;
    }else if(arr[i]<arr[j]){
      i++;
    }else{
      j++;
    }
  }
  return count;
}


int main(){
  int arr[10],n1,n2,arr1[10];
	cout<<"Enter number of elements to be inserted to an array2:"<<endl;
	cin>>n1;
	cout<<"Enter "<<n1<<" elements to an array2:\n";
	for(int i=0;i<n1;i++){
		cin>>arr[i];
	}
  cout<<"Enter number of elements to be inserted to an array2:"<<endl;
	cin>>n2;
	cout<<"Enter "<<n2<<" elements to an array2:\n";
	for(int i=0;i<n2;i++){
		cin>>arr1[i];
	}
  //int length=Intersection(arr,n1,arr1,n2);
  int length=doIntersection(arr,n1,arr1,n2);
  cout<<"Length of array formed by Intersection of two sets is: "<<length<<endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

int LargestSumContiguousSubArray(int arr[],int n){
 int sum=0,maxSum=INT_MIN;
 for(int i=0;i<n;i++){
   sum+=arr[i];
   maxSum=max(sum,maxSum);
   if(sum<0){
      sum=0;
    }
 }
 return maxSum;
}

int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  
  cout<<"Longest sum of contiguous subarray is: "<<LargestSumContiguousSubArray(arr,n)<<endl;
  return 0;
}
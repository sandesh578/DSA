#include<bits/stdc++.h>
using namespace std;

int MaximumProductSubArray(int nums[],int n){
 int  ans=nums[0],ma=ans,mi=ans;
	   for(int i=1;i<n;i++){
	       if(nums[i]<0){
	           swap(mi,ma);
	       }
	       ma=max(nums[i],ma*nums[i]);
	       mi=min(nums[i],mi*nums[i]);
	       ans=max(ans,ma);
	   }
	   return ans;
}

int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  
  cout<<"Maximum product of contiguous subarray is: "<<MaximumProductSubArray(arr,n)<<endl;
  return 0;
}
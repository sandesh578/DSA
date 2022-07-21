#include<bits/stdc++.h>
using namespace std;
int countTriplets(int a[], int n, int sum)
	{
	    sort(a, a+n);
	    int res = 0;
	    for(int i = 0;i<n;i++){
	        int j = i+1;
	        int k = n-1;
	        int x = sum-a[i];
	        while(j<k){
	            if(a[j]+a[k]<x){
	                res += k-j;
	                j++;
	            }
	            else k--;
	        }
	    }
	    return res;
	}

int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  int sum=5;
  cout<<"no of elements with given sum : "<<countTriplets(arr,n,sum)<<endl;
  return 0;
}
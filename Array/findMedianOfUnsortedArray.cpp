#include<bits/stdc++.h>
using namespace std;

int find_median(int v[],int n)
		{
		    sort(v,v+n);
		    if(n%2==0){
		        return (v[n/2]+v[(n/2)-1])/2;
		    }else{
		        return v[n/2];
		    }
		}

int main(){
  int arr[10],n,n2,arr1[10];
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  
  cout<<"Median of two non sorted array is: "<<find_median(arr,n)<<endl;
  return 0;
}
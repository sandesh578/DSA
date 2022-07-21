#include<bits/stdc++.h>
using namespace std;

int *findMissingAndRepeating(int arr[], int n) {
	    int *ar=new int[2];
      int sum=0,sqSum=0;
	    for(int i=1;i<n;i++){
	        sum+=arr[i];
          sqSum+=arr[i]*arr[i];
	    }
      ar[0]=((n*(n+1))/2)-sum;
      ar[1]=((n*(n+1)*(2*n+1))/6)-sqSum;
	    return ar;
	}

  int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

  auto p=findMissingAndRepeating(arr,n);
  cout<<"Repeating and Missing Element are: "<<p[0]<<" and "<<p[1]<<endl;
  return 0;
}
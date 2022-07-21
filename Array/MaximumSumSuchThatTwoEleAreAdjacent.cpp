#include<bits/stdc++.h>
using namespace std;

int FindMaxSum(int arr[], int n)
    {
        if(n==1) 
       return arr[0];
    if(n==2)  
       return max(arr[0],arr[1]);
    int A[n+1]; // dp array
    A[0]=0;A[1]=arr[0];
    for (int i = 2; i <=n; i++)
        A[i]=max(arr[i-1]+A[i-2],A[i-1]);
    return A[n];
    }

int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  
  cout<<"Maximum sum is: "<<FindMaxSum(arr,n)<<endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool find3Numbers(int A[], int n, int X)
{
    for(int i=0;i<n-2;i++){
        unordered_set<int> us;
        int curr=X-A[i];
        for(int j=i+1;j<n;j++){
            if(us.find(curr-A[j])!=us.end()){
                return true;
            }
            us.insert(A[j]);
        }
    }
    return false;
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
  cout<<"Elements with given sum exists : "<<find3Numbers(arr,n,sum)<<endl;
  return 0;
}
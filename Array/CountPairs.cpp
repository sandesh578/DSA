#include<bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
        int count=0;
        unordered_map<int,int> um;
        for(int i=0;i<n;i++){
            int diff=k-arr[i];
            if(um[diff]){
                count+=um[diff];
            }
            um[arr[i]]++;
        }
        return count;
    }
  
int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  int sum;
  cout<<"Enter the sum:"<<endl;
  cin>>sum;
  cout<<"Numbers of element with given sum is: "<<getPairsCount(arr,n,sum)<<endl;
  return 0;
}
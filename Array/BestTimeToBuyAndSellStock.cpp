#include<bits/stdc++.h>
using namespace std;

 int maxProfit(int prices[],int n) {
        int minv=INT_MAX;
        int maxv=INT_MIN;
        for(int i=0;i<n;i++){
            minv=min(minv,prices[i]);
            maxv=max(maxv,prices[i]-minv);
        }
        return maxv;
    }

int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  
  cout<<"Maximum profit is: "<<maxProfit(arr,n)<<endl;
  return 0;
}
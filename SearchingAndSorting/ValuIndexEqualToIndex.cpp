#include<bits/stdc++.h>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        if(i+1==arr[i]){
	           v.push_back(i+1);
	        }
	    }
	    return v;
	}

  int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

  vector<int> p=valueEqualToIndex(arr,n);
  cout<<"Elements having index same as value are:"<<endl;
  for(int i=0;i<p.size();i++){
    cout<<p[i]<<" ";
  }
  return 0;
}
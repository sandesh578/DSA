#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int nums[],int n) {
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            if(vec[nums[i]%n]==1){
                return nums[i];
            }else{
                vec[nums[i]%n]=1;
            }
        }
        return 0;
    }

int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  
  cout<<"Duplicate Element in array is: "<<findDuplicate(arr,n)<<endl;
  return 0;
}
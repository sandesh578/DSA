#include<bits/stdc++.h>
using namespace std;
 int findDuplicate(int nums[],int n) {
        for(int i=0;i<n;i++){
            nums[nums[i]%n]=nums[nums[i]%n]+n;
        }
        for(int i=0;i<n;i++){
            if((nums[i]/n)>1){
                return i;
            }
        }
        return 0;
    }

  int getDuplicate(int nums[],int n){
    int slow=nums[0];
    int fast=nums[0];
    do{
      slow=nums[slow];
      fast=nums[nums[fast]];
    }while(slow!=fast);

    fast=nums[0];
    while(slow!=fast){
      slow=nums[slow];
      fast=nums[fast];
    }
    return slow;
  }

  int indexSolution(int nums[],int n) {
        for(int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;
            
            nums[index] *= -1;
            if(nums[index] > 0)
                return abs(nums[i]);
        }    
        return -1;
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
  cout<<"Duplicate Element in array is: "<<indexSolution(arr,n)<<endl;
  return 0;
}
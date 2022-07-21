#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
    {
        int sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            m[sum]++;
            if(m[sum]>1){
                return true;
            }
            if(m[0]==1){
                return true;
            }
        }
        return false;
    }

int main(){
  int arr[10],n;
	printf("Enter number of elements to be inserted to an array:");
	scanf("%d",&n);
	printf("Enter %d elements to an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
  cout<<"Subarray exists : "<<subArrayExists(arr,n)<<endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long trappingWater(int arr[], int n){
        int left=0;
        int right=n-1;
        int maxleft=0,maxright=0;
        long long res=0;
        while(left<=right){
            if(arr[left]<=arr[right]){
                if(arr[left]>=maxleft){
                    maxleft=arr[left];
                }else{
                    res+=(long)(maxleft-arr[left]);
                }
                left++;
            }else{
                if(arr[right]>=maxright){
                    maxright=arr[right];
                }else{
                    res+=(long)(maxright-arr[right]);
                }
                right--;
            }
        }
        return res;
    }

int main(){
  int arr[10],n;
	printf("Enter number of elements to be inserted to an array:");
	scanf("%d",&n);
	printf("Enter %d elements to an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
  cout<<"Water trapped is: "<<trappingWater(arr,n)<<endl;
  return 0;
}
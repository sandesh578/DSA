#include<bits/stdc++.h>
using namespace std;

void threeWayPartition(int array[],int n,int a, int b)
    {
        int left=0;
        int right=n-1;
       for(int i=0;i<=right;i++){
           if(array[i]<a){
               swap(array[i],array[left]);
               left++;
           }
           
           
           if(array[i]>b){
               swap(array[i],array[right]);
               right--;
               i--;
           }
       }

       cout<<"Elements in array after partitioning:"<<endl;
       for(int i=0;i<n;i++){
         cout<<array[i]<<" ";
       }
    }

int main(){
  int arr[10],n;
	printf("Enter number of elements to be inserted to an array:");
	scanf("%d",&n);
	printf("Enter %d elements to an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
  int a,b;
  cout<<"Enter the two ranges:"<<endl;
  cin>>a>>b;
  threeWayPartition(arr,n,a,b);
  return 0;
}
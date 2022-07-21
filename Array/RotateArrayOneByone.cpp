#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

int main(){
  int arr[10],n;
	printf("Enter number of elements to be inserted to an array:");
	scanf("%d",&n);
	printf("Enter %d elements to an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
  rotate(arr,n);
  cout<<"Array after rotation is:"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
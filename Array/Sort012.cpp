#include<bits/stdc++.h>
using namespace std;

void  Sort012(int arr[],int n){
  //This is variation of dutch national fly algorithm
  //it works on the principle that all elements after high will be 2
  //all elements before low will be 0
  //we will iterate until mid is less than or equal to high
   int low=0,mid=0,high=n-1;
   while(mid<=high){
     if(arr[mid]==0){
       swap(arr[low],arr[mid]);
       low++;
       mid++;
     }else if(arr[mid]==1){
       mid++;
     }else if(arr[mid]==2){
       swap(arr[mid],arr[high]);
       high--;
     }
   }
}

void Sort012Algo(int arr[],int n){
  int count1=0,count2=0,count0=0;
  for(int i=0;i<n;i++){
   if(arr[i]==0) count0++;
   else if(arr[i]==1) count1++;
   else if(arr[i]==2) count2++;
  }

  int p;
  for(p=0;p<count0;p++){
    arr[p]=0;
  }
  for(int i=0;i<count1;i++){
    arr[p++]=1;
  }
  for(int i=0;i<count2;i++){
    arr[p++]=2;
  }
}

int main(){
	int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

  Sort012(arr,n);
  cout<<"Elements in the array after sorting are:"<<endl;
  for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
  }
	return 0;
}
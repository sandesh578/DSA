#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m) {
	    for(int i=0;i<n;i++){
	        if(arr1[i]>arr2[0]){
	            swap(arr1[i],arr2[0]);
	            int first=arr2[0];
	            int k;
	            for(k=1;k<m&&arr2[k]<first;k++){
	                arr2[k-1]=arr2[k];
	            }
	            arr2[k-1]=first;
	        }
	    }
	}

//best
void merge(int arr1[], int arr2[], int n, int m) {
	   int i=n-1;
	   int j=0;
	   
	   while(i>=0 && j<m){
	       if(arr1[i]>arr2[j]){
	           swap(arr1[i],arr2[j]);
	       }
	       
	       i--;
	       j++;
	       
	       
	   }
	        sort(arr1,arr1+n);
	        sort(arr2,arr2+m);
	}

int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  
  return 0;
}
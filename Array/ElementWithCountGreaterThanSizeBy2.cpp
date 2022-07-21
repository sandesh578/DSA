#include<bits/stdc++.h>
using namespace std;

int ElementWithCountGreaterThanSizeBy2(int arr[],int N,int k){
      unordered_map<int,int> um(arr,arr+N);
      for(int i=0;i<N;i++){
        if(um.find(arr[i])==um.end()){
          um[arr[i]]+=1;
        }else{
          um[arr[i]]++;
        }
      }
      for(auto num:um){
        if(num.second>(N/k)){
          return num.first;
        }
      }
      return -1;
    }

int main(){
  //  int arr[10],n;
	// cout<<"Enter number of elements to be inserted to an array:"<<endl;
	// cin>>n;
	// cout<<"Enter "<<n<<" elements to an array:\n";
	// for(int i=0;i<n;i++){
	// 	cin>>arr[i];
	// }
   int arr[]={ 1, 1, 2, 2, 3, 5, 4,2, 2, 3, 1, 1, 1 };
    int n = 12;
    int k = 4;
    cout<<"Length of longest common subsequence: "<<ElementWithCountGreaterThanSizeBy2(arr,n,k)<<endl;
  return 0;
}
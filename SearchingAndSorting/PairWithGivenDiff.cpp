#include<bits/stdc++.h>
using namespace std;

// pair<int,int> PairWithGivenDiff(int arr[],int n,int diff){
//   //time complexity - O(n) Space-complexity-O(n)
//   unordered_map<int,int> mp;
//   for(int i=0;i<n;i++){
//     if(!mp[arr[i]]){
//       mp.insert(arr[i],1);
//     }
//   }
//   int sum=0;
//   for(int i=0;i<n;i++){
//     sum=arr[i]+diff;
//     if(mp[sum]){
//       return {arr[i],mp[sum]};
//     }
//   }
//   return {-1,-1};
// }

bool findPair(int arr[], int size, int n){
     sort(arr,arr+size);
     int i=0;
     int j=1;
     while(i<size&&j<size){
         if(i!=j&&(arr[j]-arr[i])==n){
             return true;
         }else if((arr[j]-arr[i])<n){
             j++;
         }else{
             i++;
         }
     }
    return false;
}

int BinarySearch(int arr[],int start,int end,int target){
  while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==target){
      return mid;
    }else if(target<arr[mid]){
      end=mid-1;
    }else{
      start=mid+1;
    }
  }
  return -1;
}


pair<int,int> PairWithGivenDiff(int arr[],int n,int diff){
  sort(arr,arr+n);
  int sum=0;
  for(int i=0;i<n;i++){
     sum=arr[i]+diff;
     if(BinarySearch(arr,0,n-1,sum)>=0){
       return {arr[i],arr[BinarySearch(arr,0,n-1,sum)]};
     }
  }
  return {-1,-1};
}

  int main(){
  int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  int diff;
  cout<<"Enter the difference between element:"<<endl;
  cin>>diff;
  pair<int,int> p=PairWithGivenDiff(arr,n,diff);
  cout<<"Element with difference "<<diff<<" are:  "<<p.first<<" "<<p.second<<endl;
  return 0;
}
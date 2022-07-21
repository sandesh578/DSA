#include<bits/stdc++.h>
using namespace std;

int Majority(int a[],int n) {
	    int count=1;
        int maj_index=0;
        for(int i=1;i<n;i++){
            if(a[maj_index]==a[i]){
                count++;
            }else {
                count--;
            }
            if(count==0){
                maj_index=i;
                count=1;
            }
        }
        count=0;
        for(int i=0;i<n;i++){
            if(a[maj_index]==a[i]){
                count++;
            }
        }
        if(count>(n/2)){
            return a[maj_index];
        }else{
            return -1;
        }
	}

  int majorityElement(int arr[],int n){
    unordered_map<int,int> um;
    for(int i=0;i<n;i++){
      if(um[arr[i]]){
         um[arr[i]]++;
      }else{
        um[arr[i]]=1;
      }
    }
    unordered_map<int,int>::iterator it;
    for(it=um.begin();it!=um.end();it++){
      if(it->second>(n/2)){
        return it->first;
      }
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
  int p=Majority(arr,n);
  cout<<"Majority element is: "<<p<<endl;
  cout<<"Majority element is: "<<majorityElement(arr,n)<<endl;
  return 0;
}
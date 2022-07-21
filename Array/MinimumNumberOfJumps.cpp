#include<bits/stdc++.h>
using namespace std;

int minJumps(int a[],int n){
        if(n == 1){
            return 0;
        }
        if(a[0] == 0){
            return -1;
        }
        int steps = a[0];
        int maxreach = a[0];
        int jumps = 1;
        for(int i=1; i<n; i++){
            if(i == n-1){
                return jumps;
            }
            maxreach = max(maxreach, i+a[i]);
            steps--;
            if(steps == 0){
                jumps++;
                if(i >= maxreach){
                    return -1;
                }
                steps = maxreach - i;
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
  
  cout<<"Minimum number of jumps is: "<<minJumps(arr,n)<<endl;
  return 0;
}
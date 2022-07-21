#include<bits/stdc++.h>
using namespace std;

int LongestCommonSubsequence(int arr[],int N){
      unordered_set<int> us;
      for(int i=0;i<N;i++){
        us.insert(arr[i]);
      }
      int maxStreak=0;
      for(int i=0;i<N;i++){
          if(us.find(arr[i]-1)==us.end()){
              int currNum=arr[i];
              int currStreak=1;
              while(us.find(currNum+1)!=us.end()){
                  currNum+=1;
                  currStreak+=1;
              }
              maxStreak=max(maxStreak,currStreak);
          }
      }
      return maxStreak;
    }

int main(){
   int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    cout<<"Length of longest common subsequence: "<<LongestCommonSubsequence(arr,n)<<endl;
  return 0;
}
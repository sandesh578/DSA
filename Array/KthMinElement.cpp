#include<bits/stdc++.h>
using namespace std;

int KthMaxElement(int arr[],int n,int k){
  priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n-1);
  //   cout<<endl;
  //  while(!pq.empty()){
  //    cout<<pq.top()<<" ";
  //    pq.pop();
  //  }
  //  cout<<endl;
   while(k>1&&!pq.empty()){
     pq.pop();
     k--;
   }
   return pq.top();
}

int main(){
	int arr[10],n,Kmin;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

  cout<<"Enter the kth position for min element:";
  cin>>Kmin;
    
  int min=KthMaxElement(arr,n,Kmin);

	printf("%dth minimum element of array is %d\n",Kmin,min);
	return 0;
}

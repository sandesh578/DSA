#include<bits/stdc++.h>
using namespace std;

int KthMaxElement(int arr[],int n,int k){
   priority_queue<int> pq(arr,arr+n-1);//max heap by default
  //  cout<<endl;
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
	int arr[10],n,Kmax;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

  cout<<"Enter the kth position for max element:";
  cin>>Kmax;
    
  int max=KthMaxElement(arr,n,Kmax);

	printf("%dth Maximum element of array is %d\n",Kmax,max);
	return 0;
}

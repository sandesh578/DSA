#include<bits/stdc++.h>
using namespace std;
 bool palindrome(int a){
        int rev=0,num=a;
        while(a){
            rev=rev*10+(a%10);
            a=a/10;
        }
        if(rev==num){
            return true;
        }else{
            return false;
        }
        
    }
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	    if(!palindrome(a[i])){
    	        return 0;
    	    }
    	}
    	return 1;
    }
  
int main(){
	int arr[10],n;
	cout<<"Enter number of elements to be inserted to an array:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements to an array:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	printf("Elements are palindrome or not \n",PalinArray(arr,n));
	return 0;
}
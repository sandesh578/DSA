#include<stdio.h>

int main(){
	int n,del,flag=-1;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements to an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to delete:");
	scanf("%d",&del);
	printf("\nElements in an array before deletion:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	for(int i=0;i<n;i++){
	   if(arr[i]==del){
	   	flag=i;
	   	break;
	   }
	}
	
    if(flag>=0){
		for(int i=flag;i<n;i++){
			arr[i]=arr[i+1];
		}
		n=n-1;
   }else{
   	  printf("\nElement %d not found\n",del);
   }
	
	printf("\nElements in an array after deletion:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

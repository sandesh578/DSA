#include<stdio.h>

int main(){
	int n,add,flag=-1,pos;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements to an array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to add:");
	scanf("%d",&add);
	printf("Enter the position to add:");
	scanf("%d",&pos);
	printf("\nElements in an array before insertion:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	for(int i=0;i<n;i++){
	   if(i==pos){
	   	flag=i;
	   	break;
	   }
	}
	
    if(flag>=0){
        n=n+1;
		for(int i=n;i>flag;i--){
			arr[i]=arr[i-1];
		}
		arr[flag]=add;
   }else{
   	printf("Position Not Found to insert");
   }
	
	printf("\nElements in an array after insertion:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

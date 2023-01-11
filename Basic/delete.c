#include<stdio.h>
int main(){
	int a[20],size,i,loc,val;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter elements of array\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("\n The elements are:\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter the location whose value you want to delete\n");
	scanf("%d",&loc);
	val=a[loc-1];
	if(loc<0 || loc>size){
		printf("Invalid location\n");
	}
	else{
	
	for(i=loc-1;i<size;i++){
		a[i]=a[i+1];
	}
		
	for(i=0;i<size-1;i++){
		printf("%d ",a[i]);
	}
	printf("\nDeleted value is %d\n",val);
}		
}

#include<stdio.h>
int main(){
	int size,i,loc,val;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter elements of array\n");
	int a[size+1];
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("\n The elements are:\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter the location where to insert an element\n");
	scanf("%d",&loc);
	if(loc<0 ||loc>size+1){
		printf("Invalid location enterd\n");
		
	}
	else{	
	printf("Enter the value to be entered\n");
	scanf("%d",&val);
	for(i=size-1;i>=loc-1;i--){
		a[i+1]=a[i];
	}
	a[loc-1]=val;
	for(i=0;i<size+1;i++){
		printf("%d ",a[i]);
	}
}
}

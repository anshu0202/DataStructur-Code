#include<stdio.h>
int main(){
	int a[50],i,size,ser,flag;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter elements of array\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Entered elements are\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter value to be searched\n");
	scanf("%d",&ser);
	for(i=0;i<size;i++){
		flag =0;
		if(ser==a[i]){
			printf("%d is present in array at location %d\n",ser,i+1);
			break;
		}
		else{
			flag=1;
			
		}
	}
	if(flag==1){
		printf("%d is not present in the array\n",ser);
	}
}

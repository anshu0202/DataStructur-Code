#include<stdio.h>
int main(){
	int a[50],i,size,round,temp,item,flag;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter elements of array\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Entered elements are:\n ");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	} 
		printf("\n");
			for(round=1;round<size+1;round++){
				for(i=0;i<size-1;i++){
			if(a[i]>a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
//		printf("Array after sorting \n");
//		for(i=0;i<size;i++){
//		printf("%d ",a[i]);
//	} 
	printf("\nEnter element to be searched\n");
	scanf("%d",&item);
//	for(i=0;i<size;i++){
//		flag =0;
//		if(ser==a[i]){
//			printf("%d is present in array at location %d\n",ser,i+1);
//			break;
//		}
//		else{
//			flag=1;	
//		}
//	}
//	if(flag==1){
//		printf("%d is not present in the array\n",ser);
//	}
	int l=0,u=size-1,m,k;
	while(l<=u){
		k=0;
		m=(l+u)/2;
		if(item==a[m]){
			printf("Search successful at index %d",m);
			k=1;
			break;
		}
		else if(item>a[m]){
			l=m+1;			
		}
		else{
			u=m-1;
		}
	}
	if(k==0)
	printf("Search unsuccessful");
}

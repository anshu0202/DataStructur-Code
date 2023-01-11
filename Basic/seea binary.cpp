#include<iostream>
#include<ctime>
using namespace std;
int binary(int arr[],int beg,int end,int key){
    int mid;
     mid=(beg+end)/2;
    if(beg<=end){
       if(arr[mid]==key){
           return mid;
       }
       if(arr[mid]<key){
           beg = mid + 1;
        return binary(arr,beg,end,key);
       }
       if(arr[mid]>key){
           end = mid - 1;
        return binary(arr,beg,end,key);
       }
    }
return -1;
}
int main(){
   int n,i,j,key;
   cout<<"Enter the no. of elements :";
   cin>>n;
   int arr[n];
   
   srand(time(0));
   for(i=0;i<n;i++){
       arr[i] = ((rand() % n)+1);
   }
   int temp;
   for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
          if(arr[i]>=arr[j]){
              temp = arr[j];
              arr[j] = arr[i];
              arr[i] = temp;
          } 
       }
   }
   cout<<"The sorted array is : ";
   for(i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<"\nEnter the value to search: ";
   cin>>key;
   long t = clock();
   cout<<"\n"<<t;
   int index = binary(arr,1,n,key);
   if(index==-1){
       cout<<"\nElement not found";
      
   }
   else{
       cout<<"\nThe value is found at "<<index;
   }
   long t2 = clock();
   cout<<"\n"<<t2;
   long t3 = t2 - t;
   cout<<"\n"<<t3;
    cout <<endl<< "\nit took " << (float)t3/CLOCKS_PER_SEC<< " seconds" << endl;
   return 0;
}

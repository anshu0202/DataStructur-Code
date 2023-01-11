#include <iostream>
#include<cstdlib>
using namespace std;

int traverse( int arr[100],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


int insert(int arr[100], int n){
    int i,key, loc;
    cout << "Enter the element to insert: ";
    cin >> key;
    cout << "Enter the position where to insert: ";
    cin >> loc;
    int temp;
    for ( i = n; i>loc; i--) {
       arr[i] = arr[i-1];
    }
         arr[i] = key;
    cout<<"Array after insertion : \n";
    for(int i=0; i<=n; i++){
        cout << arr[i] << " ";
    }
    return -1;
}


int Delete(int arr[100],int n){
    int key,i,loc=0;
    cout<<"Enter the element to delete : ";
    cin>>key;
    for( i=0;i<n;i++){
        if(arr[i]==key){
          loc=i;
          break;
        }
    }  
    if(loc!=0){
        for(i=loc;i<n-1;i++){
            arr[i]=arr[i+1];
        }
    } 
    else{
        cout<<"Element not found.";
    }
    for(i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int search(int arr[100],int n){
    int i,key,flag=0;
    cout<<"Enter the value to search: ";
    cin>>key;
    for(i=0;i<n;i++){
       if(arr[i]==key){
            cout<<"element found at :"<<i+1<<endl;
          flag++;
       }
    }
    if(flag==0){
         cout<<"Element not found.";
    }
    return 0;
}



int sort(int arr[100],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"After Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}
int binary_search(int arr[100],int n,int beg,int end,int key){ 
    //beg=1,end=n;
    int mid=(beg+end)/2;
  //  for(int i=0;i<n;i++){
        if(beg<=end){
            if(arr[mid]==key){
            return mid;
        }
       else if(arr[mid]>key){
            end = mid-1;
            return binary_search(arr,n,beg,end,key);
        }
        else if(arr[mid]<key){
            beg = mid+1;
            return binary_search(arr,n,beg,end,key);
        }
        } 
return 0;
}
int main(){
    int arr[100], n, i, j,a,choice=1;
    cout << "Enter the no. of elements: ";
    cin >> n;
    for (i = 0; i < n; i++){
        arr[i] = (rand() % n) + 1;
    }

    for (i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    while(choice){
    cout<<"\nEnter 1 for traversing\n";
     cout<<"Enter 2 for inserting\n";
     cout<<"Enter 3 for deletion\n";
     cout<<"Enter 4 for bubble sort\n";
     cout<<"Enter 5 for linear search\n";
     cout<<"Enter 6 for binary search\n";
     cout<<"\n\n";
     cout << "\nEnter the number: ";
    cin>>a;
    switch (a){
    case 1:
        cout << "traversing\n";
        traverse(arr,n);
        break;
    case 2:
        cout << "insertion\n";
        
        insert(arr, n);
        break;
    case 3:
        cout << "deletion\n";
        Delete(arr,n);
        break;
    case 4:
        cout << "sorting\n";
        sort(arr,n);
        break;
    case 5:
        cout << "linear search\n";
        search(arr,n);
        break;
    case 6:
        cout << "binary search\n";
        int beg,end =n,i,j;
         int key,index;
         cout<<"Enter the element to search: ";
         cin>>key;
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
    cout<<"The sorted array is : \n";
   for(i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
         index = binary_search(arr,n,1,end,key);
         if(index==0){
            cout<<"\nElement not found.";
         }
         else{ 
             cout<<"\nElement found at :"<<index;
         }
        break; 
    }
    cout<<"\nDo you want to continue(0,1)?\n";
    cin>>choice;
}
    return 0;
}

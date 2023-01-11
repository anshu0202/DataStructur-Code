#include <iostream>
using namespace std;

int main() {
    int T,N,i,j;
    cin>>T;
    while(T>0){
        cin>>N;
        int arr[N];
        int count=0;
        for(i=0;i<N;i++){
            cin>>arr[i];
        }
        if(N%2==0){
        for(i=0,j=N-1;i<=(N/2)-1,j>=(N/2);i++,j--){
            // if(arr[i]==arr[j]  && ((arr[i+1]==arr[i]+1) || ( arr[i+1]==arr[i]))){
              if((arr[i]==arr[j])  && (arr[i+1]==arr[i]+1)){
                count++;
            }
            else if((arr[i]==arr[j])  && (arr[i+1]==arr[i])){
                count++;
            }
        }
        }
        else{
             for(i=0,j=N-1;i<=(N/2)-1,j>=(N/2)+1;i++,j--){
            if((arr[i]==arr[j]) &&   (arr[i+1]==arr[i]+1)){
                count++;
            }
            else if((arr[i]==arr[j]) &&   (arr[i+1]==arr[i])){
                count++;
            }
            // if(arr[i]==arr[j]){
            //     count++;
            // }
        }
        }
         if(count==N/2){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        T--;
    }
	// your code goes here
	return 0;
}

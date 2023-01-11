#include <iostream>
using namespace std;

int main() {
    int T,n,i,j;
    cin>>T;
    while(T>0){
        cin>>n;
        int arr[n];
        int count=0;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n%2==0){
        for(i=0,j=n-1;i<(n/2)-1,j>=(n/2);i++,j--){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==n/2){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        }
        else{
             for(i=0,j=n-1;i<(n/2)-1,j>=(n/2)+1;i++,j--){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==n/2){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        }
        T--;
    }
	// your code goes here
	return 0;
}

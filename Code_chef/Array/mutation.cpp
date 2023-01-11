#include <iostream>
using namespace std;

int main() {
    int T,N,K,i,count;
    cin>>T;
    while(T>0){
        cin>>N>>K;
        int arr[N];
        count=0;
        for(i=0;i<N;i++){
            cin>>arr[i];
            arr[i]=arr[i]+K;
            if(arr[i]%7==0){
                count++;
            }
        }
        cout<<count<<endl;
        T--;
    }
    cout<<"ends successfully\n";
	// your code goes here
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int T,N,i,flag=0;
    cin>>T;
    while(T>=1){
      cin>>N;
      int arr[N];
    //   opt=0;
    
      cout<<"N = "<<N<<endl;
      for(i=0;i<N;i++){
          cin>>arr[i];
          cout<<arr[i]<<" = input \n";
          if(i==1){
              cout<<"kk\n";
              if(arr[1]==arr[0]){ 
                  flag=1;
                   cout<<"joker flag = "<<flag<<endl;
              }
          }
          cout<<"hii1 flag = "<<flag<<endl;
      }
      cout<<"hii2 and flag = "<<flag<<endl;
      if(flag==1){
          cout<<"0\n";
      }
      else{
          cout<<N<<"\n";
      }
        flag=0;
        T--;
    }
	// your code goes here
	return 0;
}

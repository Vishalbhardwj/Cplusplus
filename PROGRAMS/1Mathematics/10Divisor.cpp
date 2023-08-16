#include<iostream>
using namespace std;

int main(){
    // int t;
    // cin>>t;
    // while(t){
    // int n;
    // cin>>n;
    // 
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<endl;
    //     }
    // }
    //     t--;
    // }

    int t;
    cin>>t;
    while(t){
        int n;
   cin>>n;
   int i;
   
   for( i=1;i*i<n;i++){
    if(n%i==0){
        cout<<i<<endl;
    }
   }
   for(;i>=1;i--){
    if(n%i==0){
        cout<<n/i<<endl;
    }
   }
    t--;
    }

   
  
   
    return 0;
}

#include<iostream>
using namespace std;


int SumofNo(int n){
if(n==0)
    return 0;

return n+SumofNo(n-1);
}

int SumofNoT(int n,int sum){
if(n==0){
    return sum;
}
    SumofNoT(n-1,sum+=n);
}
int main(){

    // Way 1 Simple non-tail recursive  function.
    // int t;
    // cin>>t;
    // while(t--){
    // int n;
    // cin>>n;
    // cout<<SumofNo(n)<<endl;
    // }

    // Way 2 Simple tail recursive function.
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<SumofNoT(n,0)<<endl;
    }
    
    
    
    return 0;
}
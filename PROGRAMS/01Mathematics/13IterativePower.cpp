#include<iostream>
using namespace std;

int main(){


    // Way 1
    int t;
    cin>>t;
    while(t){
    int x,n;
    cin>>x>>n;
    int res=1;
    while(n>0){
        if(n%2!=0){
            res=res*x;
        }
        x=x*x;
        n=n/2;
    }
    cout<<res<<endl;
        t--;
    }
    
    



    return 0;
}
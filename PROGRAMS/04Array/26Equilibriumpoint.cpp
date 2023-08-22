#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ts=0;  
        for(int i=0;i<n;i++){
            ts+=a[i];
        }
        int prefixsum=0;
        int flag=0;
        for(int i=0;i<n;i++){
            prefixsum+=a[i];
            if(prefixsum-a[i]==ts-prefixsum){
                flag=1;
                cout<<"yes"<<endl;
                break;
            }
        }
        if(flag!=1)
        cout<<"no"<<endl;

        
    }
    return 0;
}
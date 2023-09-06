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
       
       int pos=0,des=0,jumps=0;
       for(int i=0;i<n-1;i++){
        des=max(des,a[i]+i);
        if(i==pos){
            pos=des;
            jumps++;
        }
       }
       if(pos<n-1){
        cout<<"-1"<<endl;
       }
       cout<<jumps;
                    
    }

   return 0;
}
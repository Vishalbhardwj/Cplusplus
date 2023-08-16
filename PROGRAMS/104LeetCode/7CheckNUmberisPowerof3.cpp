#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

    


int main(){
    int n;
    cin>>n;
   
    int res=0;
    int i=0;
    while(res<=n){
        res+=pow(3,i);
    if(res==n||res-1==n){
    cout<<res<<endl;
    }
        i++;
    }
    
    if(res>n)
    cout<<res;
        





   return 0;
}
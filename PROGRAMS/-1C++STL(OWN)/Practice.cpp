#include<iostream> 
#include<bits/stdc++.h>
#include<forward_list>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        forward_list<int> fl={12,45,67,81,11};
        for(auto x:fl){
            cout<<x<<" . ";
        }
        fl.assign({110000,8325699});
        for(auto x:fl){
            cout<<x<<" ";
        }

       

    }
    
    return 0;
}
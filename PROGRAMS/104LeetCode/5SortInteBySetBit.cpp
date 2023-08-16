#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int bitCount(int n){
    int count=0;
    while(n){
        if(n%2!=0)
        count++;
        n/=2;  
    }
    return count;
}

int main(){

    vector<int> giv;
    for(auto i:giv){
        cin>>i;
    }
    for(auto i:giv){
    cout<<i<<" ";
    }



   return 0;
}
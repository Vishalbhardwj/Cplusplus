#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int countBit(int i){
int res=0;
while(i){
    i=i&(i-1);
    res++;
}
return res;
}

int main(){
    int n;
    cin>>n;
    int count=0;
    cout<<'0'<<endl;
    for(int i=1;i<=n;i++){
        count=countBit(i);
        cout<<count<<" ";
    }


   return 0;
}
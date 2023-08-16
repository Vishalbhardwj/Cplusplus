#include<iostream>
#include<bits/stdc++.h>
using namespace std;

using namespace std;

int josephus(int n,int k){
    list<int> l;
    for(int i=0;i<n;i++){
        l.push_back(i);
    }
    auto it=l.begin();
    while(l.size()>1){
        for(int move =1;move<k;move++){
            it++;
            if(it==l.end()){
                it=l.begin();
            }
        }
        it=l.erase(it);
        if(it==l.end()){
            it=l.begin();
        }
    }
    return *l.begin();

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<josephus(n,k)<<endl;
    }
    return 0;
    
}
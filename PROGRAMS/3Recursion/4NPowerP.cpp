#include<iostream>
using namespace std;

int NPowerP(int n,int p){
    if(p==0){
        return 1;
    }
    return n*NPowerP(n,p-1);
}


int main(){
    int t;
    cin>>t;
    while(t--){
    int n,p;
    cin>>n;
    cin>>p;
    cout<<NPowerP(n,p)<<endl;
    }

    
    
    return 0;
}
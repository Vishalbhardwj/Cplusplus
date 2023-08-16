#include<iostream>
using namespace std;

int factn(int n){
    if(n==0){
        return 1;
    }
    return n*factn(n-1);
}

int main(){

    // Way 1
    int n;
    cin>>n;
    int fact=1;
    for(int i =n;i>0;i--){
        fact*=i;
    }
    cout<<fact<<endl;

    // Way 2
    int k;
    cin>>k;
    cout<<factn(k)<<endl;

   

    return 0;
}
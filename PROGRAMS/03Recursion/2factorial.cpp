#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int factot(int n,int k){
    if(n==0){
        return k;
    }
     factot(n-1,k*n);

}

int main(){
    // Way 1 ( factorial of no,but not tail recursive)
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;
    //     cout<<fact(n);
    //     t--;
    // }

    // Way 2 (factorial of no as tail recursive)
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        cout<<factot(n,1);
        t--;
    }

    return 0;
}
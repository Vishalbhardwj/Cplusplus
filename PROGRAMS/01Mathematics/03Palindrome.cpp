#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t){

    int n;
    cin>>n;

    int actual =n,rev=0;
    
    while(n){

    int rem=n%10;
    rev = rev*10 + rem;
    n=n/10;

    }

    if(actual==rev)
    cout<<"this is palidrome"<<endl;
    else
    cout<<"this is not palidrome"<<endl;

    t--;
    }
   
    

    return 0;
}
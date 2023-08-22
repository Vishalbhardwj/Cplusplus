#include<iostream>
using namespace std;

int main(){
    // There are 6 six bitwise operators in CPP.
    // bitwise And  &
    // bitwise Or   |
    // bitwise Xor  ^
    // Left shift   <<  (formula : x<<y :(x*(2^y)))
    // Right shift  >>  (formula : x>>y :(x/(2^y)))
    // bitwise not  ~

    int x,y;
    cin>>x>>y;
    cout<<(x&y)<<endl;
    cout<<(x|y)<<endl;
    cout<<(x^y)<<endl;
    cout<<(x<<y)<<endl;
    cout<<(x>>y)<<endl;
    cout<<(~x)<<endl;



    return 0;
}
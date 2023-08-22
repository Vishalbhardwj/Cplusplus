#include<iostream>
using namespace std;

int SumofDigits(int n){
if(n==0) return 0;
return n%10+SumofDigits(n/10);
}

int main(){

    // Way To find the sumofdigits.
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<SumofDigits(n)<<endl;
    }
    

    return 0;
}
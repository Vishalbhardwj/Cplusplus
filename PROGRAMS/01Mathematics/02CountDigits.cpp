#include<iostream>
using namespace std;
#include<math.h>

int CountDigits(int n){
    int count =0;
    while(n){
        n=n/10;
        count++;
    }
    return count;
}

int main(){

// Way 1
    int t;
    cin>>t;
    while(t){
    int n;
    cin>>n;
    cout<<CountDigits(n)<<endl;
    t--;
    }

// Way 2 
    int k;
    cin>>k;
    while(k){
        int l;
        cin>>l;
        cout<<floor(log10(l) + 1)<<endl;
        k--;
    }


    return 0;
    
}
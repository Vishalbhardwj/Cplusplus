#include<iostream>
using namespace std;

int CountSetBitsNaive(int n){
    int res=0;
        while(n>0){
            if(n%2!=0){
             res++;
            }
            n/=2;
        }
        return res;
}
int CountSetBit(int n){
    int res =0;
    while(n>0){
        if((n&1)==1){
            res++;
        }
        n=n>>1;
    }
    return res;
}

int KernighanCountBit(int n){
    if(n==0) return 0;
    int res =0;
    while(n){
        n=n&(n-1);
        res++;
    }
    return res;
}


int main(){
    // Way 1 (Naive Solution)
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;
    //    cout<<CountSetBitsNaive(n)<<endl;
    //     t--;
    // }

    // Way 2 ( using right shift operator )
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;
    //     cout<<CountSetBit(n)<<endl;

    //     t--;
    // }

    // Way 3  (Using Brian kernighan algo)
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;
    //     cout<<KernighanCountBit(n);
    //     t--;
    // }

    // Way 4 (Using Brain Kernighan algo but short line of code)  (NOt Working)
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;
    //     cout<<KernighanShort(n)<<endl;
    //     t--;
    // }

    


    return 0;
}
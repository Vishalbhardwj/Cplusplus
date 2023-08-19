#include<iostream>
using namespace std;
#include<math.h>

int main(){

    // Way 1 
    // int t;
    // cin>>t;
    // while(t){
    // int n;
    // cin>>n;
    // bool isPrime[n+1];
	// fill(isPrime, isPrime + n + 1, true);
    // for(int i=2;i*i<=n;i++){
    //     if(isPrime[i]){
    //         for(int j=2*i;j<=n;j+=i){
    //             isPrime[j]=false;
    //         }
    //     }
    // }
    // for(int i=2;i<=n;i++){
    //     if(isPrime[i]){
    //         cout<<i<<endl;
    //     }
    // }
    //     t--;
    // }

    // Way 2
    // int t;
    // cin>>t;
    // while(t){
    // int n;
    // cin>>n;
    // bool isPrime[n+1];
    // fill(isPrime,isPrime+n+1,true);
    // for(int i=2;i*i<=n;i++){
    //     if(isPrime[i]){
    //     for(int j=i*i;j<=n;j+=i){
    //         isPrime[j]=false;
    //     }
    //     }
    // }
    // for(int i=2;i<=n;i++){
    //     if(isPrime[i]){
    //         cout<<i<<endl;
    //         }
        
    // }
    // t--;
    // }

    //Way 3 (Only Reduce the line of code)
    // Removing last loop in above code.
    // changing the condition of first loop.
     int t;
    cin>>t;
    while(t){
    int n;
    cin>>n;
    bool isPrime[n+1];
    fill(isPrime,isPrime+n+1,true);
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<endl;
        for(int j=i*i;j<=n;j+=i){
            isPrime[j]=false;
        }
        }
    }
    t--;
    }


    //                       time complexity :-O(nloglogn)


   

    return 0;
}
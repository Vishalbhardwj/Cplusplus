#include<iostream>
using namespace std;

// int isPrime(int n){
//     if(n==2||n==3){
//         return 1;
//     }
//     for(int i=2;i*i<=n;i++){
//         if(n%2==0)
//         return 0;
//     }
//     return 1;
// }

    // int isPrime1(int n){
    //     if(n==2||n==3)
    //     return 1;
    //     if(n%2==0||n%3==0)
    //     return 0;
    //     for(int i=5;i*i<=n;i+=6){
    //         if(n%i==0||n%(i+2)==0)
    //         return 0;
    //     }
    //     return 1;
    // }

int main(){
    // Way 1
    // int t;
    // cin>>t;
    // while(t){
    // int n;
    // cin>>n;
    // int flag =0;
    // for(int i =2;i<=n;i++){
    //     if(n==2||n==3){
    //         cout<<"prime"<<endl;
    //         flag=1;
    //         break;
    //     }
    //     if(n%2==0){
    //         cout<<"this is not prime"<<endl;
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==0){
    //     cout<<"prime no"<<endl;
    // }
    // t--;
    // }

    // Way 2 

    // int t;
    // cin>>t;
    // while(t){
    // int n;
    // cin>>n;
    // cout<<isPrime(n)<<endl;
    // t--;
    // }

    // Way 3
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;
    //     cout<<isPrime1(n)<<endl;
    //     t--;
    // }

    // Way 4
    // time complexity :-O(1).
    int t;
    cin>>t;
    while(t){
    int n;
    cin>>n;
    int flag =1;
    if(n==2||n==3||n==5||n==7||n==9){
        cout<<"prime"<<endl;
    }else{
        for(int i=2;i<=9;i++){      // Loop iteration are fixed 
            if(n%i==0){
                cout<<"not a prime"<<endl;
                 flag=0;
                break;      
            }
        }
        if(flag)
        cout<<"prime"<<endl;  
    }
        t--;
    }
    




    
    

    return 0;
}

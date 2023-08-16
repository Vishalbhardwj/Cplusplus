#include<iostream>
using namespace std;

// void PrimeFactor(int n){
//     for(int i=2;i<=n;){ //In effective way you just need the change i*i
//         if(n%i==0){
//             n/=i;
//             cout<<i<<endl;
//         }
//         else{
//             i++;
//         }
//     }
//     if(n>1){
//         cout<<n<<endl;
//     }
// }

void PrimeFactors(int n){
    while(n%2==0){
        n/=2;
        cout<<"2"<<endl;
    }
    while(n%3==0){
        n/=3;
        cout<<"3"<<endl;
    }
    for(int i=5;i*i<=n;){
        if(n%i==0){
            n/=i;
            cout<<i<<endl;
        }
        if(n%(i+2)==0){
            n/=(i+2);
            cout<<(i+2)<<endl;
        }
        else
            i+=6;
        
    }
    if(n>1){
        cout<<n<<endl;
    }
}

int main(){

    // Way 1
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;
    //     PrimeFactor(n);
    //     t--;
    // }


    // Way 2 
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        PrimeFactors(n);
        
        t--;
    }
    return 0;
}
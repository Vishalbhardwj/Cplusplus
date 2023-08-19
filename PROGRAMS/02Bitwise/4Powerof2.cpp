#include<iostream>
using namespace std;

int main(){

    // Way 1 (Checking power of 2)
    int t;
    cin>>t;
    while(t){
    int n;
    cin>>n;
    int flag=1;
     while(n>1){
            if(n%2!=0){
                cout<<"not"<<endl;
                flag=0;
                break;
            }
            n/=2;
    }
    if(flag){
        cout<<"yes"<<endl;
    }
        t--;
    }
    


    // Way 2 (checking the no. n as power of i)
    // int t;
    // cin>>t;
    // while(t){
    //     long long int n;
    //     cin>>n;
    // int flag =1;
    //     int i;
    //     cin>>i;  // ( Enter the no. i)
    //     while(n>1){
    //         if(n%i!=0){
    //             cout<<"not"<<endl;
    //             flag=0;
    //             break;
    //         }
    //         n/=i;
    //     }
    //     if(flag)
    //     cout<<"yes"<<endl;
    //     t--;
    // }


    // Way 3 (checking power of 2 Using Brian kernighan algo)
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;

    //    if(((n)&(n-1))==0){
    //     cout<<"yes"<<endl;
    //    }
    //    else{
    //     cout<<"no"<<endl;
    //    }
    //     t--;
    // }
    
    return 0;
}
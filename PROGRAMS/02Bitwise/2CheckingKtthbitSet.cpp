#include<iostream>
using namespace std;
int checkingK(int n,int k){
    if((n&(1<<(k-1)))!=0){   // becarefull about the brackets !
        return 1;
    }
    return 0;
}

int checkKright(int n,int k){
    if(((n>>(k-1))&1)==1)
    return 1;
    return 0;
}

int main(){

    // Way 1 (Using Left Shift Operator)
    // int t;
    // cin>>t;
    // while(t){
    // int n,k;
    // cin>>n>>k;
    // cout<<checkingK(n,k);
    // t--;
    // }

    // Way 2 (Using Right Shift Operator)
    int t;
    cin>>t;
    while(t){
        int n,k;
        cin>>n>>k;
        cout<<checkKright(n,k)<<endl;
        t--; 
    }




    
    return 0;
}
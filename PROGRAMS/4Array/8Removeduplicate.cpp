#include<iostream>
using namespace std;

int main(){

    // Way 1  Need of temporary array ,but array must be sorted :
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int temp[n];
    // temp[0]=a[0];
    // int res=1;
    // for(int i=0;i<n;i++){
    //     if(temp[res-1]!=a[i]){
    //         temp[res]=a[i];
    //         res++;
    //     }
    // }
    // for(int i=0;i<res;i++){
    //     a[i]=temp[i];
    // }
    // for(int i=0;i<res;i++){
    //     cout<<a[i]<<" ";
    // }

    // Way 2 NO Need of temporary array, array must be sorted:
    int res =1;
    for(int i=1;i<n;i++){
        if(a[res-1]!=a[i]){
            a[res]=a[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        cout<<a[i]<<" ";
    }

    
    return 0;
}
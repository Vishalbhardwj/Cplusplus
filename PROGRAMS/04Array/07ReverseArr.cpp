#include<iostream>
using namespace std;

int main(){
    // Way 1 MINE
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int temp=0;
    // for(int i=0;i<n;i++){
    //     if(i<(n/2)){
    //         temp=a[n-1-i];
    //         a[n-1-i]=a[i];
    //         a[i]=temp;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }

    // Way 2 

    int low=0,high=n-1,temp=0;
    while(low<high){
            temp=a[high];
            a[high]=a[low];
            a[low]=temp;
            low++;
            high--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
       
           
    

    
    
    return 0;
}
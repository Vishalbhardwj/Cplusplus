
#include<iostream>
using namespace std;

int main(){
    // Way : Iterative Binary Search for ascending order sorted array only.:
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter x:"<<endl;
    int x;
    cin>>x;
    int mid,high=n-1,low=0;
    int flag=1;
    while(low<=high){
        mid=(high+low)/2;
        if(x==a[mid]){
            flag=0;
            cout<<mid<<endl;
            break;
        }
        else if(x<a[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    if(flag){
        cout<<"-1"<<endl;
    }
    }
    return 0;
}
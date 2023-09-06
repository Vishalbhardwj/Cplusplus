#include<iostream>
using namespace std;

int bs(int a[],int low,int high,int x){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(x==a[mid]) return mid;
    
    else if(x<a[mid]){
        bs(a,low,mid-1,x);
    }
    else
        bs(a,mid+1,high,x);
    
}

int main(){
    //  Way : Recursive binary search approach for Ascending order sorted array only.
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low=0,high=n-1,x;
    cout<<"enter x:"<<endl;
    cin>>x;
    cout<<bs(a,low,high,x)<<endl;
    }
    
    return 0;
}
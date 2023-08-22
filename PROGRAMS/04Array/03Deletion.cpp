#include<iostream>
using namespace std;

int deletion(int arr[],int n,int x){
    int i=0;
    for(i;i<n;i++){
        if(x==arr[i]){
            break;
        }
    }
    if(i==n){
        return n;
    }
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    return n-1;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Enter no.to be delete"<<endl;
        int x;
        cin>>x;
        n=deletion(arr,n,x);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
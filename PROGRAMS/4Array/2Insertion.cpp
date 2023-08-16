#include<iostream>
using namespace std;
int Insert(int arr[],int cap,int n,int x,int pos){
    if(n==cap){
        return 0; 
    }
    int index =pos-1;
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=x;
    return 1;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<"Enter capcity & n:"<<endl;
        int cap;
        cin>>cap;
        int arr[cap];
        int n;
        cin>>n;
        cout<<"Enter no & position:"<<endl;
        int x,pos;
        cin>>x>>pos;

        cout<<"Enter array"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Before insertion array is: "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int flag=Insert(arr,cap,n,x,pos);
        cout<<endl;


        if(flag){
            cout<<"Insertion array is:"<<endl;
             for(int i=0;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        }else{
            cout<<"Insertion can't takes place"<<endl;
        }
        
       
        cout<<endl;
        
    

    }

    return 0;
}
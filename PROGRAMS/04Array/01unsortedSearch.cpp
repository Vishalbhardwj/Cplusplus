#include<iostream>
using namespace std;
int unsortedSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];  //fixed sized array
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Enter the element to be Searched"<<endl;
        int x;
        cin>>x;
        cout<<unsortedSearch(arr,n,x)<<endl;
    }
    return 0;
}
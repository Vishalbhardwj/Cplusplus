#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       int xora=0,res1=0,res2=0;
       for(int i=0;i<n;i++){
        xora=xora^arr[i];
       }
       int rsb=((xora)&(~(xora-1)));

       for(int i=0;i<n;i++){
        if((arr[i]&(rsb))!=0){
            res1= res1^arr[i];
        }
        else{
            res2=res2^arr[i];
        }
       }
       cout<<res1<<endl<<res2<<endl;

       
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){

    
    // cout<<"Enter first Sorted Array:"<<endl;
    //  cout<<"But Size first:"<<endl;
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // cout<<"Enter Second Sorted Array:"<<endl; 
    // cout<<"But Size first:"<<endl;
    // int o;
    // cin>>o;
    // int b[o];
    // for(int i=0;i<o;i++){
    // cin>>b[i];
    // }

 
    // for(int i=0;i<n;i++){
    //     if(a[i]==a[i-1]&& i>0)
    //     continue;
    //     for(int j=0;j<o;j++){
    //         if(a[i]==b[j]){
    //           cout<<a[i]<<" ";
    //             break;  
    //         }
    //     }
    // }

    // optimized approach :

     cout<<"Enter first Sorted Array:"<<endl;
     cout<<"But Size first:"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter Second Sorted Array:"<<endl; 
    cout<<"But Size first:"<<endl;
    int o;
    cin>>o;
    int b[o];
    for(int i=0;i<o;i++){
    cin>>b[i];
    }

    int i=0,j=0;
    while(i<n&&j<o){

        if(a[i]==a[i-1]&&i>0){
            i++;
            continue;
            }

        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        
    }



   
    
    
    return 0;
}
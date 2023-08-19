#include<iostream>
using namespace std;

int main(){

    // Way 1 timecomplexity -O(n)  IN two traversal of array:
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int largest =0;
    // for(int i=0;i<n;i++){
    //     if(a[largest]<a[i]){
    //         largest=i;
    //     }
    // }
    // cout<<"largest"<<endl;
    // cout<<largest<<endl;
    // int res=-1;
    // for(int j=0;j<n;j++){
    //     if(a[largest]!=a[j]){

    //         if(res==-1){
    //             res=j;  // or you can use res=0;
    //         }

    //         if(a[res]<a[j]){
    //             res=j;
    //         }
    //     }
    // }
    // cout<<"Second largest"<<endl;
    // cout<<res<<endl;

    // Way 2 timecomlexity -O(n) IN single traversal of array:
    int largest=0,res=-1;
    for(int i=1;i<n;i++){
        if(a[largest]<a[i]){
            res=largest;
            largest=i; 
        }
        else if(a[largest]!=a[i]){
            if(res==-1||a[i]>a[res]){
                res=i;
            }
        }
    }
    cout<<endl;
    cout<<"Second largest no is:"<<endl;
    cout<<res<<endl;
    return 0;
}
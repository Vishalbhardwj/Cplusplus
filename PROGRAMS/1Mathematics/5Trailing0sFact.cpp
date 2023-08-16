#include<iostream>
using namespace std;

int main(){
    
    // Way 1
    
    // int t;
    // cin>>t;
    // while(t){
    // int n;
    // cin>>n;
    // int fact =1;
    // for(int i=n;i>0;i--)
    // fact*=i;
    // int count=0;
    // while(fact%10==0){
    //     count++;
    //     fact/=10;
    // }
    // cout<<count<<endl;
    // t--;
    // }

    // Way 2

    int k;
    cin>>k;
    int count =0;
    for(int i=5;i<=k;i=i*5){
        count+=(k/i);
    }
    cout<<count<<endl;



    return 0;
}
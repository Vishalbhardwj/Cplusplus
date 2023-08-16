#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int ans=0;
    cout<<"Enter the no of problem";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            ans++;
        }
    }
    cout<<ans;
    }
    
    return 0;
}
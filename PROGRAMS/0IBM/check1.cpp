#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n=str.length();
        int s=0;
        for(int e=0;e<n;e++){
            if(e==n-1||str[e]==' '){
                cout<<s<<" "<<e<<endl;
                s=e+1;
            }
        }
    }

    return 0;
}
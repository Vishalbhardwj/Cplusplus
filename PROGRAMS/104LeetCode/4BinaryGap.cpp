#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
    int n;
    cin>>n;
    string s ="";
    while(n){
        if(n%2!=0){
            s+="1";
        }else{
            s+="0";
        }
        n/=2;
    }
    cout<<s<<endl;
    int long_dist=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
             for(int j=i+1;j<s.length();j++){
                if(s[j]=='1'){
                    long_dist=max(long_dist,abs(i-j));
                    break;
                }
             }
        }

    }
    cout<<"longest_dist"<<long_dist<<endl;



    }

    


   return 0;
}
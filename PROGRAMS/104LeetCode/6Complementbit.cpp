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
     string bin_str=""; 
      while(n){
          if(n%2!=0){
              bin_str+="0";
          }else{
              bin_str+="1";
          }
          n/=2;
      }
      cout<<bin_str<<endl;
      int res=stoi(bin_str,0,2);
      cout<<res<<endl;
}
    
        

   return 0;
}
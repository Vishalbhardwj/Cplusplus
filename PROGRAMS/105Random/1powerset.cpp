#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string  s;
    cin>>s;
    int length=s.length();
    for(int i=0;i<=pow(2,length)-1;i++){
      for(int j=0;j<length;j++){
        if((i&(1<<j))!=0){
            cout<<s[j];
        }
      }
    cout<<endl;
    }

    return 0;
}
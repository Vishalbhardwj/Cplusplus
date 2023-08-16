#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

 int bitCount(int n){
        int count=0;
        while(n){
            if(n%2!=0)
            count++;
            n/=2;  
        }
        return count;
    }

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int si;
        cin>>si;
       for(int i=0;i<si;i++){
           int c;
           cin>>c;
        v.push_back(c);
       }
       sort(v.begin(),v.end());


        for(int i=0;i<v.size();i++){
          for(int j=0;j<v.size();j++){
            if(bitCount(v[j])>=bitCount(v[j+1])){
                swap(v[j],v[j+1]);
            }
          }
      }
      for(auto l:v){;
        cout<<l<<" ";
      }
    }

     

   return 0;
}
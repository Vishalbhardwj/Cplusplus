#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        stack<char> st;
        string s;
        cin>>s;
       for(int i=0;i<s.length();i++){
        st.push(s[i]);
       }
       for(int i=0;i<s.length();i++){
        s[i]=st.top();
        st.pop();
       }
       cout<<s<<endl;
    }

    
}
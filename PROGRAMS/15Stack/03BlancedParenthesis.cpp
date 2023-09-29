#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool match(char a,char b){
    return (a=='(' && b==')')||(a=='{' && b=='}')||(a=='[' && b==']');
}

bool blancedParenthesis(string str){

    stack<char> s;
    for(auto x : str){
        if(x=='('||x=='['||x=='{'){
            s.push(x);
        }else{
            if(s.empty()){
                return false;
            }else if(match(s.top(),x)==false){
                return false;
            }else{
                s.pop();
            }
        }
    }
    return (s.empty()==true);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<"Enter the string:"<<endl;
       string str;
       cin>>str;
       cout<<blancedParenthesis(str)<<endl;

    }
    return 0;
}
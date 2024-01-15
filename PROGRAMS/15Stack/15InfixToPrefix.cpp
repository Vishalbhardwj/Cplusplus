#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }else if(c=='/'||c=='*'){
        return 2;
    }else if(c=='+'||c=='-'){
        return 1;
    }else{
        return -1;
    }
}


string infixToPrefix(string str){

    stack<char> s;
    string res="";
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            res+=str[i];
        }else if(str[i]==')'){
            s.push(str[i]);
        }else if(str[i]=='('){
            while(!s.empty()&&s.top()!=')'){
                res+=s.top();
                s.pop();
            }
            if(!s.empty()){
                s.pop();
            }
        }else{
            while(!s.empty()&& prec(s.top())>=prec(str[i])){
                res+=s.top();
                s.pop();
            }
            s.push(str[i]);
        }

    }
    while(!s.empty()){
        res+=s.top();
        s.pop();
    }
    reverse(res.begin(),res.end());
    return res;
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        cout<<infixToPrefix(str)<<endl;
    }
    
    return 0;
}
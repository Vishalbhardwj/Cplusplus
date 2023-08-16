#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool match(char a,char b){

return (a=='[')&&(b==']')||(a=='{')&&(b=='}')||(a=='(')&&(b==')');
}

int main(){
    int t;
    cin>>t;
    while(t--){
        // Checking str for Balanced parenthesis: Bracket composes are :{[()]}.
        stack<char> st;
        string str;
        cin>>str;
        bool flag=1;
        for(int i=0;i<str.length();i++){
            if(str[i]=='('||str[i]=='{'||str[i]=='['){
                st.push(str[i]);
            }else{
                if(st.empty()==true){
                    flag=0;
                    
                }else if(match(st.top(),str[i])){
                    st.pop();
                }else{
                    flag=0;
                    
                }

                }
            }
            if(st.empty()&&flag){
                cout<<"BalancedParenthesis:"<<endl;
            }else{
                cout<<"UnbalancedParenthesis:"<<endl;
            }
           
            
        } 
    return 0;
    }
  

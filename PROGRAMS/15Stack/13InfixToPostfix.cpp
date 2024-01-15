#include<iostream>
#include<stack>
using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }else if(c=='*'||c=='/'){
        return 2;
    }else if(c=='+'||c=='-'){
        return 1;
    }else{
        return -1;
    }
}

string infixToPostfix(string str){
    stack<char> s;
    string postfix="";
    for(int i=0;i<str.length();i++){

        if(str[i]>='a'&& str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
            postfix+=str[i];

        }else if(str[i]=='('){
            s.push(str[i]);

        }else if(str[i]==')'){
            while(!s.empty()&&s.top()!='('){
                postfix+=s.top();
                s.pop();
            }
            if(!s.empty()){
                s.pop();
            }
        }
        else{
            while(!s.empty()&&prec(str[i])<=prec(s.top())){
                postfix+=s.top();
                s.pop();
            }
            s.push(str[i]);
        }

    }
    while(!s.empty()){
        postfix+=s.top();
        s.pop();
    }
    return postfix;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        string infix;
        getline(cin,infix);
    

        cout<<infixToPostfix(infix)<<endl;
    }

    return 0;
}
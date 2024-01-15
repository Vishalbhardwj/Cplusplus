#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int postfixEvaluation(string str){
    stack<int> s;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0'&&str[i]<='9'){
            s.push(str[i]-'0');
        }else{
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
           
            switch (str[i]){
                    case '+':
                        s.push(op2+op1);
                        break;

                    case '-':
                        s.push(op2-op1);
                        break;

                    case '/':
                        s.push(op2/op1);
                        break;

                    case '*':
                        s.push(op2*op1);
                        break;

                    case '^':
                        s.push(pow(op2,op1));
                        break;

                }
            }

    }  
    return s.top();

}

int main(){
    int t;
    cin>>t;
    while(t--){
        string postfix;
        cin>>postfix;

        cout<<postfixEvaluation(postfix)<<endl;
    }
    return 0;
}
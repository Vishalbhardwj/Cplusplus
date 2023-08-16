#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;
    s.push("vishal");
    s.push("bhardwaj");
    s.push("pro");
    int n=s.size();
    for(int i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();              // Because of this stack become empty;
    }
    cout<<endl;
    s.push("vishal");
    s.push("bhardwaj");
    s.push("pro");

    cout<<s.empty()<<endl;
    cout<<"size of Stack"<<s.size()<<endl;
    cout<<"Top Element->"<<s.top()<<endl;
    s.pop();
    cout<<"Size of Stack "<<s.size()<<endl;
    cout<<"Top Element->"<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<"Empty  "<<s.empty()<<endl;
    cout<<"Size "<<s.size()<<endl;
    



    return 0;
}
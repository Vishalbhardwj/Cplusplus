#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("vishal");
    q.push("bhardwaj");
    q.push("kunal");
    cout<<"Size before pop:"<<q.size()<<endl;
    cout<<"Top most Element:"<<q.front()<<endl;
    q.pop();
    cout<<endl;
    cout<<"Top most Element:"<<q.front()<<endl;
    cout<<"Size after pop"<<q.size()<<endl;
    cout<<q.back();




    return 0; 
}
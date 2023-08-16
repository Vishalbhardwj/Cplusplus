#include<iostream>
#include<list>
using namespace std;

int main(){

    // list is implemented by doubly linked list: So we don't have random ascess:

    list<int> l(50,4);
    list<int> k(l);

    cout<<"Printing k list:"<<endl;
   
    k.push_back(45);
    k.push_front(23);
    
    cout<<"Printing k list On specific cond"<<endl;
    for(auto i:k){
        if(i%2!=0)
        cout<<i<<" ";
    }cout<<endl;


    cout<<"Printing k list after removing front and back"<<endl;
    k.pop_back();
    k.pop_front();
    for(auto i:k){
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Printing l list:"<<endl;
    l.push_front(890);
    for(auto i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<l.empty()<<endl;
    cout<<l.size()<<endl;
    l.erase(l.begin());
    for(auto i:l){
        cout<<i<<" ";
    }cout<<endl;
    cout<<l.size()<<endl;
    cout<<l.max_size()<<endl;


    cout<<"Accessing the element :"<<endl;
    list<int> t={1,3,4,5};
    int count=0;
    for(auto i:t){
        if(count==2){
             cout<<i<<" ";
        }
        count++;
    }      
    cout<<t.front()<<endl;
    cout<<t.back()<<endl;  

    list<string> s;
    s.push_back("vishal");
    s.push_back("bhardwaj");
    s.push_back("kunal");
    s.push_back("ritesh");
    for(auto i:s){
        cout<<i<<" ";
    }  

   
    return 0;
}
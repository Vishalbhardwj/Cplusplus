#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d;

    // Inserting element from back:
    d.push_back(34);
    // Inserting element from front:
    d.push_front(100);
    cout<<"After pushing element from front and back:"<<endl;
    for(auto i:d){
        cout<<i<<" ";
    }
    // Removing element from back:
    d.pop_back();   

    cout<<endl;

   for(auto i:d){
    cout<<i<<" ";
   }

    //Removing element from front:
    d.pop_front();


    for(auto i :d){
        cout<<i<<" ";
    }
    cout<<"Size after removing all element:"<<endl;
    cout<<"Size of deque:"<<d.size()<<endl;
    cout<<"Max size of deque:"<<d.max_size()<<endl;
    cout<<d.empty()<<endl;
    d.push_back(3489);
    cout<<d.at(0)<<endl;
    cout<<d.empty()<<endl;
    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;

    d.push_back(34);
    d.push_back(456);
    d.push_back(1212);
    d.push_back(45);
    d.push_back(9);
    d.push_back(1);
    


    cout<<"Before Erasing the element:"<<endl;
    for(auto l:d){  
        cout<<l<<" ";
    }

  


    // Using iterator:
    cout<<endl;

    cout<<"After Erasing "<<endl;
     d.erase(d.begin(),d.begin()+1);     //  d.erase(d.begin());
    for(auto l :d){
        cout<<l<<" ";
    }cout<<endl;

    cout<<"After Erasing all element "<<endl;
    d.erase(d.begin(),d.end());
    
    for(auto l:d)
    cout<<l<<" ";



   
    
    


    return 0;
}
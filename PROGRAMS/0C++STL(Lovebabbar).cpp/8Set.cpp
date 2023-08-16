#include<iostream>
#include<set>
using namespace std;

int main(){

    // Internally set is implemented by bst;

    //  Set can only contain unique value :
    // IN set inserted value of can't be modified :
    // Output value of set are in sorted manner:


    // Like wise Unordered set can be implemented:
    // Only diff in Unordered set is Output order and time complexity .



    set<int> s;

    s.insert(34);
    s.insert(34);
    s.insert(3);
    s.insert(90);
    s.insert(1);
    s.insert(28);
    s.insert(3);

    for(auto i:s){
        cout<<i<<" ";
    }

    set<int>::iterator it=s.begin();

    it++;
    s.erase(it);
    cout<<endl;

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Present or not"<<s.count(-9)<<endl;         // present or not 

    set<int>::iterator itr=s.find(28);           // find give the iterator to the element

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;



    




    return 0;
}
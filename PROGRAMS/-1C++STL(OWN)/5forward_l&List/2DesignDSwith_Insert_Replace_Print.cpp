#include<iostream>
#include<bits/stdc++.h>
using namespace std;

   list<int> l;

void insert(int x){
    l.push_back(x);
}
void print(){
    for(auto x:l){
        cout<<x<<" ";
    }
}

// void replace(int x,vector<int> rep){

// }
void replace(int x,vector<int> v){
    auto it=find(l.begin(),l.end(),x);    
    if(it==l.end()){
        return ;
    }

    it=l.erase(it);
    l.insert(it,v.begin(),v.end());
}




int main(){
    insert(34);
    insert(12);
    insert(0);
    insert(1);
    insert(8910);
    print();
    cout<<endl;
    // Replacing:
    vector<int> v{12,412,6789,123};
    replace(0,v);
    print();
    cout<<endl;
    // Replacing: done with element which is not present:
    vector<int> k{21,21,0,3};
    replace(7,k);
    print();
    
  
     
        

    return 0;
}
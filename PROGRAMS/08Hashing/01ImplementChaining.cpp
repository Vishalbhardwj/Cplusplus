#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct myHash
{
    int bucket;
    list<int> *table;

    myHash(int b){
        bucket=b;
        table=new list<int>[b];
    }

    void insert(int key){
        int i=key%bucket;
        table[i].push_back(key);

    }

    void del(int key){
        int i=key%bucket;
        table[i].remove(key);

    }

    bool search(int key){
        int i=key%bucket;
        for(auto x : table[i]){
            if(key==x){
                return true;
            }
        }
        return false;
    }

};


int main(){
 
        myHash ob(12);
        ob.insert(200);
        ob.insert(123);
        ob.insert(678);
        ob.insert(9021);
        ob.insert(1231);
        cout<<ob.search(678)<<endl;
        ob.del(678);
        cout<<ob.search(678)<<endl;
        cout<<ob.search(9021)<<endl;
        ob.del(9021);
        cout<<ob.search(9021)<<endl;


}
#include<iostream>
#include<map>
using namespace std;

int main(){

    // In map data is stored in key,value pair :
    // key must be unique:
    // Like same as map you can implemented unordered map:
    // Only diff in Unordered map is order and time complexity:
    

    map<int,string> m;
    
    m[2]="vishal";
    m[34]="bhardwaj";
    m[21]="kunal";
    m[1]="lll";

    cout<<"Before Erasing element"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding key->"<<m.count(34)<<endl;

    cout<<"value at->"<<m.at(2)<<endl;

    cout<<"After Erasing element from"<<endl;

    m.erase(34);

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    map<int,string>::iterator itr=m.find(2);
    cout<<endl;

    for(auto i=itr;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    
    
    
    
    
    return 0;
}
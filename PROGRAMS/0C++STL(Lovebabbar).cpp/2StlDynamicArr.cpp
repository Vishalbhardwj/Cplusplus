#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    
    //Pushing element to vector:
    v.push_back(45);
    v.push_back(456);
    v.push_back(31);

    for(auto i:v){         // auto or datatype of vector like int
        cout<<i<<""<<" ";

    }


    cout<<endl;


    //Applying funtion to given vector :
    cout<<v.empty()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.at(1)<<endl;


    //Making vector of user given size(100) with value (5): 
    vector<int> k(100,5);

    for(auto i:k){
        cout<<i<<" ";
    }

    // Making vector of given size:
    vector<int> g(200);
    for(auto l:g){
        cout<<l<<" ";
    }
    cout<<endl;

    // Making vector of pre initialise value 
    vector<int> l={2,3,5,6};

    cout<<"Before poping element"<<endl;
    l.pop_back();
    cout<<"After poping element"<<endl;
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<"Copying the value of another vector"<<endl;
    vector<int> ne(g);

    // You can choose any of way 
    // for(auto i:ne){
    //     cout<<i<<" ";
    // }

    for(int i=0;i<200;i++){
        cout<<"vishal"<<endl;
        cout<<ne[i]<<" ";
    }


    cout<<"Before clear the vector :"<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.clear();

    cout<<"After clearing the vector :"<<endl;
    // After clearing vector cap remain same and size =0;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;


    
    


    

    


    return 0;
}
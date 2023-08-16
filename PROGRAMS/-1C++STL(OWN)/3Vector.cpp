#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    // Vector : 

    // 1.Way of making vector:
    vector<int> v;

    // 2.Way of making vector:
    vector<int> x{10,5,20};

    // 3.Way of making vector:     if you only give size then by default vector make all elment as '0'.
    int n=3,k=10;    // n is size ,k element of vector  
    vector<int> w(n,k);


    




    // Inserting element in vector:
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    
    //1.Way for Traversing on vector 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


    //2.Way for traversing on vector:        But using & refrence operator you can alter value:
    for(auto &x:v){
        x=6;
    } 
    cout<<endl;

    //Same as '2 way' traversing but can't alter value :
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    //3.Way for Traversing on vector:     Inplace of auto use can use vector<int>::
    for(auto it =w.begin();it!=w.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    //4.Way for Traversing on vector in reverse direction:  Using rbegin() iterator and rend():
    // rbegin() point's on last element and rend point's on before first element :
    for(auto it=x.rbegin();it!=x.rend();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // function in Vector:
    // push_back()
    // pop_back()
    // front() 
    // back()
    // insert()
    // erass()
    // clear()
    // resize()
    // empty()
    

    //////////::::::::
    cout<<" PUSH_BACK,POP_BACK,FRONT,BACK FUCTIONS"<<endl;


    
    vector<int> v2={23,45, 67};
    
    v2.push_back(45);  // Help in pushing element from backside in vector.

    for(auto x:v2){
        cout<<x<<" ";
    }

    v2.pop_back();     // Removing last element from vector.
    cout<<endl;

    v2.front()=45678;

    cout<<v2.front()<<endl;   // Gives  refrence to the first element.
    cout<<v2.back()<<endl;    // Gives refrence to the second element.



    //////////:::::::::
    cout<<" INSERT FUCTION "<<endl;



    cout<<"Before Applying Insert Operation vector is:"<<endl;
    for(auto x:v2){
        cout<<x<<endl;
    }
    cout<<endl;
   
    // insert(position,element):

    auto it =v2.insert(v2.begin(),100);    // After inserting return add of 100 to it.

    v2.insert(v2.begin()+2,200);          

    // Another version of insert : (position,no of times,element):

    v2.insert(v2.begin(),2,300);  // Helping in inserting ele for multiple time.

    // Another version of insert: to insert element from diff containers to a container:
    // Syntax :-(postion where to ele insert,star post,end post) : Here star pos,end pos:-specifies from where to where.
    
    vector<int> v3;
    cout<<"v3:vector After inserting element of v2 to v3"<<endl;
    v3.insert(v3.begin(),v2.begin(),v2.begin()+2);
    for(auto x:v3){
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"After Applying Insert Operation vector is:"<<endl;

    for(auto x:v2){
        cout<<x<<" ";
    }
    cout<<endl;


    ////////:::::::
    cout<<" ERASE,CLEAR FUCTIONS "<<endl;


    vector<int> v4{34,567,891,9012};

    cout<<"Befor removing element from vector is: "<<endl;
    for(auto x:v4){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"After removing element from vector is "<<endl;

    v4.erase(v4.begin());   // Erase to remove element from vector.

    for(auto x:v4){
        cout<<x<<" ";
    }
    
    cout<<endl;

    v4.erase(v4.begin(),v4.end()-1);     // (starting,ending) range wise working.

    for(auto y: v4){
        cout<<y<<" ";
    }



  

   








    






    











   
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    // pair defination & initialization:

    // 1.Way of making pair:
    pair<int,int> p1(34,56);
    pair<int,string> p2(1239,"vishal");

    // 2.Way of making pair:
    pair<int,string> p5={345,"bhardwaj"};

    // 3.way of making pair:  Old way:
    pair<int,int> p6=make_pair(34,56);


    // pair first value & pair second value:

    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;


    // Comparison of pairs:

    pair<int,int> p3(1,12),p4(9,12);
    cout<<(p3==p4)<<" "<<(p3!=p4)<<" "<<(p3 > p4)<<" "<<(p3<p4)<<" "<<endl;


    // Working of comparison operator on pair 

    // double equal-> both pair has to be equal for returning true.
    // not equal-> if both are different then it return true.


    // Below Cases are tricky:
    // smaller then-> the compiler compare first value of both the pair and 
    // by chance both value are equal then it will compare second value of both the pair.
    // Greater then-> work similar as smaller then.




    return 0;
}

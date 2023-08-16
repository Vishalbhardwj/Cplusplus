#include<iostream>
#include<array>
using namespace std;

int main(){
    // stl array fixed size:
    array<int,5> a={3,4,5,6,1};

    for(int i=0;i<a.size();i++){      // arr_name.size();
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<a.at(4)<<endl;
    cout<<a.empty()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    




    return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;

    v.push_back(12);
    v.push_back(45);
    v.push_back(23);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);

    cout<<"Sorting in Ascending Order:"<<endl;

    sort(v.begin(),v.end());

    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;



    cout<<"Sorting in Descending Order:"<<endl;

    sort(v.begin(),v.end(),greater<int>());

   
    for(auto i:v){
        cout<<i<<" ";
    }

    sort(v.begin(),v.end());
    // Stable_sort function is also there :

    cout<<"Finding value in vector -> "<<binary_search(v.begin(),v.end(),23)<<endl;

    // Lower bound:
    // Upper bound:

    cout<<lower_bound(v.begin(),v.end(),24)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    int a=5;
    int b=4;

    // Swap

    swap(a,b);

    cout<<a<<endl;
    cout<<b<<endl;

    // max
    // min

    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;

    // Reverse:

    string s="aadslfkajsdlf";
    reverse(s.begin(),s.end());

    cout<<s<<endl;

    // Rotate:

    rotate(v.begin(),v.begin()+2,v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;







    


    


    
    
    
    
    return 0;
}
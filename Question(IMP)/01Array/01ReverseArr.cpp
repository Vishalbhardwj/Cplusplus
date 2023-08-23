#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Q Given an array (or string), the task is to reverse the array/string.
//l https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       int start=0,end=n-1;
       while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
       }
       for(auto x:v){
        cout<<x<<" ";
       }
    }
    return 0;
}
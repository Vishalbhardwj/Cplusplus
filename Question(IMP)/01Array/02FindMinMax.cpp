#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Q Maximum and minimum of an array using minimum number of comparisons
//l https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

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
        int maxi=v[0],mini=v[0];
        for(int i=0;i<n;i++){
            if(v[i]>maxi){
                maxi=v[i];
            }
            if(v[i]<mini){
                mini=v[i];
            }
        }
        cout<<mini<<" "<<maxi<<endl;

    }


   return 0;
}
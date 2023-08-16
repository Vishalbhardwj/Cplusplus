#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        // Given array can be : binary array ,boolean array , string of 0 & 1.
        //  Minimum no of fliping of Group's to Make Array comprasise of same element:
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int k;d
            cin>>k;
            v.push_back(k);
        }
        for(int i=1;i<n;i++){
            if(v[i]!=v[i-1]){

                if(v[i]!=v[0]){
                    cout<<"From "<<i<<" to ";
                }else{
                    cout<<(i-1)<<endl;
                }
            }
        }
        if(v[n-1]!=v[0]){
            cout<<(n-1)<<endl;
        }


    }

    return 0;
}
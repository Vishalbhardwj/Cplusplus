#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> left(n);
        vector<int> right(n);
        for(int i=0;i<n;i++){
            cin>>left[i];
        }
        for(int i=0;i<n;i++){
            cin>>right[i];
        }
       
        vector<int> freq(101);
        for(int i=0;i<n;i++){
            freq[left[i]]++;
            freq[right[i]+1]--;
        }
        int res=0;
        for(int i=1;i<101;i++){
            freq[i]=freq[i-1]+freq[i];
            if(freq[i]>freq[res]){
                res=i;
            }
        }
        cout<<res<<endl;

        

        

    }

   return 0;
}
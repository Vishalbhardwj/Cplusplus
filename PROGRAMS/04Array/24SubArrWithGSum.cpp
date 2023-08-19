#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
        }


        // Naive Approach :
        cout<<"Enter Given sum"<<endl;
        int gs;
        cin>>gs;
        // int sum=v[0];
        // int flag=0;
        // for(int i=0;i<n;i++){
        //     sum=v[i];
        //     for(int j=i+1;j<n;j++){
        //         sum+=v[j];
        //         if(sum==gs){
        //             flag=1;
        //             break;
        //         }
        //     }

        // }
        // if(flag){
        //     cout<<"true"<<endl;
        // }else{
        //     cout<<"no"<<endl;
        // }

        // Optimized approach:


        int s=0,curs=0,flag=0;
        
        
        for(int e=0;e<n;e++){
            curs+=v[e];
            while(gs<curs){
                curs-=v[s];
                s++;
            }
            if(curs==gs){
                flag=1;
                break;
            }

        }
        if(flag){
            cout<<"True"<<endl;
        }else{
            cout<<"False"<<endl;
        }



    }
    return 0;
}
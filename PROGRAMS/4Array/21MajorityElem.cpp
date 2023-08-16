#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
        }
        // // Naive solution :
        // int count=1,res=-1;
        // for(int i=0;i<n;i++){
        //     count=1;
        //     for(int j=i+1;j<n;j++){
        //         if(v[i]==v[j]){
        //             count++;
        //         }
        //     }
        //     if(count>n/2){
        //         res=i;
        //         break;
        //     } 
        // }
        // cout<<v[res]<<endl;
        
    

    // Optimized Approach :
    //  Boyer Moore Voting Algo: Have two Phase:
    // 1.finding Candidate
    // 2.Checking that Candidate is Majority Element :


    // 1.Phase:
    int res=0,count=1;
    for(int i=1;i<n;i++){
        if(v[res]==v[i]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    // 2.Phase
    int time=0;
    for(int i=0;i<n;i++){
        if(v[res]==v[i])
             time++;  
    }
    if(time<=n/2){
        res=-1;
    }
    cout<<v[res]<<endl;

    }

    

    


    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int largestRecArea(int arr[],int n){
    stack<int> s;
    int ps[n],ns[n];
    s.push(0);
    ps[0]=-1;
    for(int i=1;i<n;i++){
        while(!s.empty()&&arr[s.top()]>=arr[i]){
            s.pop();
        }
        ps[i]=s.empty()?-1:s.top();
        s.push(i);
    }
    while(!s.empty()){
        s.pop();
    }

    s.push(n-1);
    for(int j=n-1;j>=0;j--){
        while(!s.empty()&&arr[s.top()]>=arr[j]){
            s.pop();
        }
        ns[j]=s.empty()?n:s.top();
        s.push(j);
    }
    int area=0,res=arr[0];
    for(int i=0;i<n;i++){
        area=(ns[i]-ps[i]-1)*arr[i];
        res=max(res,area);
    }
    return res;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // Naive Solution :
        int res=0;
        for(int i=0;i<n;i++){
            int area=arr[i],left=0;
            for(int j=i-1;j>0;j--){
                if(arr[j]<arr[i]){
                    break;
                }
                area+=arr[i];
            }
            int right=0;
            for(int k=i+1;k<n;k++){
                if(arr[k]<arr[i]){
                    break;
                }
                area+=arr[i];
            }
           
            res=max(res,area);

        }
        cout<<res<<endl;



        // Optimized Approach:
        cout<<"Optimized Approach:"<<endl;
        cout<<largestRecArea(arr,n)<<endl;
        


        
    }
    return 0;
}
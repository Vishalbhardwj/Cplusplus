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
        int r,c;
        cin>>r>>c;
        int arr[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }
        }

        // Optimized Approach:

        int res=largestRecArea(arr[0],c);
        for(int i=1;i<r;i++){
            for(int j=0;j<c;j++){
                if(arr[i][j]==1){
                    arr[i][j]+=arr[i-1][j];
                }
            }
            res=max(res,largestRecArea(arr[i],c));
        }
        cout<<res<<endl;
        
    }
    return 0;
}
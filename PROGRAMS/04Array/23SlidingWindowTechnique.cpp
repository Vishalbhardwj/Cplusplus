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
        int res=INT16_MIN;
        int sum=0;
        int j=0;
        cout<<"Enter value of k:"<<endl;
        int k;
        cin>>k;
        for(int i=0;i<n;i++){
            sum=0;
            j=0;
            while((j<k)&&(i+j<n)){
                int index=i+j;
                sum+=v[index];
                res=max(res,sum);
                j++;
            }
        }
        cout<<res<<endl;


        // Optimized Approach: Made by Me:
        // cout<<"Enter value of K:"<<endl;
        // int k;
        // cin>>k;

        // int res=INT16_MIN;
        // int prewindow_sum=0;
        // for(int i=0;i<k;i++){
        //     prewindow_sum+=v[i];
        // }
        // int curwindow_sum=0;
        // for(int i=1;i+(k-1)<n;i++){
        //     prewindow_sum-=v[i-1];
        //     prewindow_sum+=v[i+k-1];
        //     curwindow_sum=prewindow_sum;
        //     res=max(res,curwindow_sum);
        //     prewindow_sum=curwindow_sum;
            
        // }
        // cout<<res<<endl;


        // Optimized Approach: same as above in time complexity:
        
        cout<<"Enter value of k:"<<endl;
        int k;
        cin>>k;
        int cur=0;
        for(int i=0;i<k;i++){
            cur+=v[i];
        }
        int res=cur;
        for(int i=k;i<n;i++){
            cur+=v[i]-v[i-k];
            res=max(res,cur);
        }
        cout<<res<<endl;
    }
    return 0;
}
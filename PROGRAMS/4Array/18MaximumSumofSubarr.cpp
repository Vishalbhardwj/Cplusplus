#include<iostream>

using namespace std;

int main(){
    
 

    int t;
    cin>>t;
    while(t--){ 

        // Naive solution:
        // time complexity is O(n^2):

        // int n;
        // cin>>n;
        // int a[n];
        // for(int i=0;i<n;i++){
        //     cin>>a[i];
        // }
        // int maxsum=INT16_MIN;
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=a[j];
        //         maxsum=max(maxsum,sum);
        //     }
        // }
        // cout<<maxsum<<endl;

        // Optimized Approach:
        // time complexity is :- O(n):
        // Using kadane's algorithm

        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int res=a[0];
        int maxSumEnding=a[0];
        for(int i=1;i<n;i++){
            maxSumEnding=max(maxSumEnding+a[i],a[i]);
            res=max(res,maxSumEnding);
        }
        cout<<res<<endl;

        
    }
    

   return 0;
}
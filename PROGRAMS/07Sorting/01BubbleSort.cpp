#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    // Sorting in Ascending order:

    
    // Way 1 : bubble short :- O(nsquare) time complexity but O(1) auxiliary space 
    // int n;
    // cin>>n;
    // int a[n];
    // int count=0;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1;j++){
    //         if(a[j]>a[j+1]){
    //             count++;
    //             swap(a[j],a[j+1]);
    //         }
    //     }
    // }
    // cout<<count<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }


    // Way 2 : Same as above but optimized in terms of stoping when array get sort in middile:
    // In terms of t.c and a.s it is same as above until array is not already sorted.
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int swapped;
    for(int i=0;i<n-1;i++){
        swapped=0;
        for(int j=0;j<n-1-i;j++){   // changing  n-1 to n-1-i drop some iteration which we don't want: 
                                    // Iteration like :Not comparing element of j with largest fix elements at last
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped =1;
            }
        }
        if(swapped==0){
            cout<<"Array is Already Sorted or Sorted in middle"<<endl;
            break;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

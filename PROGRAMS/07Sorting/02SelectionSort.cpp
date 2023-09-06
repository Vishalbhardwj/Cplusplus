#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void naiveSelectSort(int a[],int n){
    int temp[n]; int min_index;
    for(int i=0;i<n;i++){
        min_index=0;
        for(int j=0;j<n;j++){
            if(a[min_index]>a[j])
            min_index=j;
        }
        temp[i]=a[min_index];
        a[min_index]=INT16_MAX;
    }

    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void SelectionSort(int a[],int n){
    int min_index=0;
    for(int i=0;i<n;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){
            if(a[min_index]>a[j]){
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    // Way 1: Naive approach :auxiliary space O(n):
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    naiveSelectSort(a,n);

    // // Way 2: Best apporach : auxiliary space O(1):
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // // SelectionSort(a,n);

    return 0;
}
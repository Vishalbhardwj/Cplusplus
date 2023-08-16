#include<iostream>
using namespace std;

void LomutoPartition(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(a[j]<pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[high]);

}

void LomutoPartitionV(int a[],int low,int high,int pivot_index){
    swap(a[high],a[pivot_index]);
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(a[j]<pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[high]);

}

int main(){
    // Way 1: in standered method of lomuto partition pivot is last element:
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // int l=0;
    // int h=n-1;
    // LomutoPartition(a,l,h);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }

    // Way 2: In lomuto variant user defined pivot can consider with small modification in above code:

     int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;
    int h=n-1;
    cout<<"Enter the pivot"<<endl;
    int pivot;
    cin>>pivot;
    LomutoPartitionV(a,l,h,pivot);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
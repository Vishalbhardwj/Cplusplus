#include<iostream>
using namespace std;

int HoarePartition(int a[],int low,int high){
    int pivot=a[low];
    int i=low-1,j=high+1;
    while(true){
        do{
            i++;
        }while(a[i]<pivot);

        do{
            j--;
        }while(a[j]>pivot);
        
        if(i>=j) return j;
        swap(a[i],a[j]);
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low=0;
    int high=n-1;
    cout<<HoarePartition(a,low,high)<<endl;
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    }
    return 0;
}
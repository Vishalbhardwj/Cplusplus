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

void quickSort(int a[],int low ,int high){
    if(low<high){
        int p=HoarePartition(a,low,high);
        quickSort(a,low,p);
        quickSort(a,p+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low=0;
    int high=n-1;
    quickSort(a,low,high);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
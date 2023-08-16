#include<iostream>
using namespace std;

void Mergefun(int a[],int low,int mid, int high){
    int n1=(mid-low)+1,n2=(high-mid);
  
    int left[n1],right[n2];

  for(int i=0;i<n1;i++){
    left[i]=a[low+i];
  }

  for(int i=0;i<n2;i++){
    right[i]=a[mid+1+i];
  }
  
    int i=0,j=0,k=low;
    while(i<n1&&j<n2){
        if(left[i]<=right[j]){
            a[k]=left[i];
            k++;
            i++;
        }else{
            a[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        a[k]=left[i];
        k++;
        i++;
    }
    while(j<n2){
        a[k]=right[j];
        k++;
        j++;
    }
}
void MergeSort(int a[],int l,int r){
if(r>l){
    int m=l+(r-l)/2;
    MergeSort(a,l,m);
    MergeSort(a,m+1,r);
    Mergefun(a,l,m,r);
}

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;
    int r=n-1;
    MergeSort(a,l,r);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
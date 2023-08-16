#include<iostream>
using namespace std;


int  Mergefun(int a[],int low,int mid, int high){
    int n1=(mid-low)+1,n2=(high-mid);
  
    int left[n1],right[n2];

  for(int i=0;i<n1;i++){
    left[i]=a[low+i];
  }

  for(int i=0;i<n2;i++){
    right[i]=a[mid+1+i];
  }
  int res=0;
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
            res+=(n1-i);
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
    return res;

}

int MergeSort(int a[],int l,int r){
    int res=0;
if(r>l){
    int m=l+(r-l)/2;
    res+=MergeSort(a,l,m);
    res==MergeSort(a,m+1,r);
     res+=Mergefun(a,l,m,r);
}
    return res;
}


int main(){
    
    // navie idea:
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                res++;
            }
        }
    }
    cout<<res<<endl;

// I realy din't have idea about this code :
    // Optimized approach:
    
    MergeSort(a,0,n-1);

    return 0;
}
#include<iostream>
using namespace std;
void SortArrofThreeTypeE(int a[],int n){
    int temp[n],i=0;
    
    for(int j=0;j<n;j++)
        if(a[j]==0)
            temp[i++]=a[j];
    for(int j=0;j<n;j++)
        if(a[j]==1)
            temp[i++]=a[j];
    for(int k=0;k<n;k++)
        if(a[k]==2)
            temp[i++]=a[k];
    for(int j=0;j<n;j++)
        a[j]=temp[j];
    
}

int main(){

    //  Naive approach :

    // int n;
    // cin>>n;

    // int a[n];

    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // SortArrofThreeTypeE(a,n);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }

    // Optimized approach : Also Called Dutch National flag Algo:

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i=0, k=n-1;
    int j=0;
    while(j<=k){
        if(a[j]==1){
           
            swap(a[j],a[i]);
            i++;
            j++;
        }else if(a[j]==0){
          
            swap(a[j],a[k]);
            k--;
        }
        else{
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



    

   return 0;
}
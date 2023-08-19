#include<iostream>
using namespace std;



void OpSortArrOfTwoTypeE(int a[],int n){
    
    int i=-1,j=n;
    while(true){
        do{
            i++;
        }while(a[i]>=0);

        do{
            j--;
        }while(a[j]<0);
        
        if(i>=j) return;
        swap(a[i],a[j]);
    }

}
void SortArrOfTwoTypeEle(int a[],int n){
    int aux[n],index=0;
    for(int i=0;i<n;i++){
        if(a[i]>=0)
        aux[index++]=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            aux[index++]=a[i];
        }
    }
    for(int i=0;i<n;i++){
        a[i]=aux[i];
    }
}


int main(){

    // Naive approach:
    
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // SortArrOfTwoTypeEle(a,n);

    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }



    // Optimized Approach:

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    OpSortArrOfTwoTypeE(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
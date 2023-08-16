#include<iostream>
using namespace std;

void CountingSort(int a[],int n, int k){
int count[k];
for(int i=0;i<k;i++){
    count[i]=0;
}
for(int i=0;i<n;i++){
    count[a[i]]++;
}
int index=0;
for(int i=0;i<k;i++){
    for(int j=0;j<count[i];j++){
        a[index]=i;   
        index++;
    }
}
}

void OptiCountingSort(int a[],int n, int k){
 int count[k];
 int Output[n];
for(int i=0;i<k;i++){
    count[i]=0;
}
for(int i=0;i<n;i++){
    count[a[i]]++;
}
for(int i=1;i<k;i++){
count[i]+=count[i-1];
}
for(int i=n-1;i>=0;i--){
Output[count[a[i]]-1]=a[i];
count[a[i]]--;
}
for(int i=0;i<n;i++){
    a[i]=Output[i];
}
}


int main(){
     
    //  Naive Counting Sort :
    // cout<<"First Enter K:"<<endl;
    // int k;
    // cin>>k;
    // cout<<"Now Size of array:"<<endl;
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    
    // CountingSort(a,n,k);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }



    // Optimized Counting Sort :
    cout<<"First Enter K:"<<endl;
    int k;
    cin>>k;
    cout<<"Now Size of array:"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    OptiCountingSort(a,n,k);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    

    

    return 0;
}
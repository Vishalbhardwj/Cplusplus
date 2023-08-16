#include<iostream>
using namespace std;

void OptiCountingSort(int a[],int n, int exp){
 int count[10];
 int Output[n];
for(int i=0;i<10;i++){
    count[i]=0;
}
for(int i=0;i<n;i++){
    count[(a[i]/exp)%10]++;
}
for(int i=1;i<10;i++){
count[i]+=count[i-1];
}
for(int i=n-1;i>=0;i--){
Output[count[(a[i]/exp)%10]-1]=a[i];
count[(a[i]/exp)%10]--;
}
for(int i=0;i<n;i++){
    a[i]=Output[i];
}
}

void RadixSort(int a[],int n){
    int mx=a[0];
    for(int i=0;i<n;i++){
        if(mx<a[i]){
            mx=a[i];
        }
    }

    for(int exp=1;mx/exp>0;exp*=10){
        OptiCountingSort(a,n,exp);
    }

}



int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    RadixSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
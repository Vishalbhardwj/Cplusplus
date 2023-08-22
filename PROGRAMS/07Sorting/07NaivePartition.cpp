#include<iostream>
using namespace std;
void NaivePartition(int a[],int p,int l,int h){
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++){
        if(a[p]>a[i]&& i!=p){
            temp[index]=a[i];
            index++;
        }
    }
    temp[index++]=a[p];
    for(int i=l;i<=h;i++){
        if(a[i]==a[p]&&i!=p){
            temp[index++]=a[i];
        }
    }
    for(int i=l;i<=h;i++){
        if(a[p]<a[i]){
            temp[index]=a[i];
            index++;
        }
    }
   
    for(int i=l;i<=h;i++){
        a[i]=temp[i-l];
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter p,low:";
    int p,l;
    cin>>p>>l;
    int h=n-1;
    
    NaivePartition(a,p,l,h);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}
#include<iostream>
using namespace std;
void reverse(int a[],int low,int high){
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
void LeftRotate(int a[],int n, int d){
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}


void leftRotatebyOne(int n,int a[]){
    int temp=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
}
void leftRotatebyD(int n,int a[],int d){

    for(int i=0;i<d;i++){
        leftRotatebyOne(n,a);
    }
   

}

int main(){

    // Way 1 : Using function & function:

    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // cout<<"Enter d"<<endl;
    // int d;
    // cin>>d;
     
    // leftRotatebyD(n,a,d);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }

    // Way 2 : Iterative it require auxilary sap:- O(n)

    // int n; 
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // cout<<"Enter d:"<<endl;
    // int d;
    // cin>>d;
    // int temp[n];
    // for(int i=0;i<d;i++){
    //     temp[i]=a[i];
    // }
    // for(int i=d;i<n;i++){
    //     a[i-d]=a[i];
    // }
    // for(int i=0;i<n;i++){
    //     a[n-d+i]=temp[i];
    // }

    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }


    // Way 3 : auxiliary sp: O(1)
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter d:"<<endl;
    int d;
    cin>>d;

    LeftRotate(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    

    return 0;
}
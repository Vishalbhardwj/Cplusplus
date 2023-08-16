#include<iostream>
using namespace std;

int main(){
   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int min=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(a[min]>=a[i])
        min=i;
        if(a[max]<a[i])
            max=i;
    }
    if(max>min)
    cout<<max+((n-1)-min)-1;
    else
        cout<<max+((n-1)-min);

    return 0;
}
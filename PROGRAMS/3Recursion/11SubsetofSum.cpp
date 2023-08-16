#include<iostream>
using namespace std;

int SubsetSum(int arr[],int n,int Sum){
    if(n==0)
        return (Sum==0)? 1:0;

    return SubsetSum(arr,n-1,Sum) +
    SubsetSum(arr,n-1,Sum-arr[n-1]);

}

int main(){
    int t;
    cin>>t;
    while(t--){
        // Enter the Size of arr
        int n;
        cin>>n;
        // Enter Element of arr
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // Enter Sum
        int Sum;
        cin>>Sum;
        cout<<SubsetSum(arr,n,Sum)<<endl;
    }
    return 0;
}
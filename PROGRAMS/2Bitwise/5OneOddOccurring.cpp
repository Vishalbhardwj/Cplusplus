#include<iostream>
using namespace std;
void OneOddOccurring(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count%2!=0){
            cout<<arr[i]<<endl;
            break;
        }
    }
}

void OneOddXor(int arr[],int n){
    int xora=0;
    for(int i=0;i<n;i++)
    {
        xora=xora^arr[i];

    }
    cout<<xora<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //     }
    //     OneOddOccurring(arr,n);
    //     t--;
    // }


    // int t;
    // cin>>t;
    // while(t){
    //      int n;
    //     cin>>n;
    //     int arr[n];
    //     for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //     }
    //     OneOddXor(arr,n);

    //     t--;
    // }
    
    return 0;
}
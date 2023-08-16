#include<iostream>
using namespace std;

int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
  int flag =1;
  
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
          cout<<"no"<<endl;
      flag =0;
      break;
      }
    }
    if(flag){
        cout<<"yes"<<endl;
    }
    return 0;
}
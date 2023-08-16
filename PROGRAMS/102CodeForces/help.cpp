#include<iostream>

using namespace std;
int allequal(int a[],int n){
    int count=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1])
        {
            count++;
            if(count==n){
                return 1;
            }

        }
    }
    return 0;
}

int main(){
     int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        if(allequal(a,n)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }



    }
   return 0;
}
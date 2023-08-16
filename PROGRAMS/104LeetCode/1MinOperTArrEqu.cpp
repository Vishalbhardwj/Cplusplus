#include<iostream>
using namespace std;

bool notEqual(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1])
        return 1;
    }
    return 0;
}
    int minOperations(int n) {

        int a[n];
        for(int i=0;i<n;i++){
            a[i]=(2*i)+1;
        }
        int op=0;

        while(true){
            if(notEqual(a,n)){

                int min=0;
                for(int i=0;i<n;i++){
                    if(a[min]>a[i]){
                        min=i;
                    }
                }
                a[min]+=1;
                int max=0;
                for(int i=0;i<n;i++){
                    if(a[max]<a[i]){
                        max=i;
                    }
                }
                a[max]-=1;
                op++;

            }else{

                break;
                
            }
        }
        return op;
        
    }
    int main(){
        int t;
        cin>>t;
        while(t--){
        int n;
        cin>>n;
        int op=minOperations(n);
        cout<<op<<endl;
        }
      
        return 0;
    }

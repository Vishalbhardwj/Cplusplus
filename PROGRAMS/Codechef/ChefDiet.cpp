#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
   
    int i;
    for( i=0;i<n-1;i++){
        if(a[i]>=k){
            a[i+1]+=a[i]-k;
        }else{
            cout<<"NO"<<endl;
            cout<<i+1<<endl;
            break;
        
        }
    }
    if(a[n-1]>=k){
        if(i==n-1)
        cout<<"YES"<<endl;
    }else{
        if(i==n-1){
             cout<<"NO"<<endl;
        cout<<(n-1)+1<<endl;
        }
       
    }
   
    
}
	return 0;
}

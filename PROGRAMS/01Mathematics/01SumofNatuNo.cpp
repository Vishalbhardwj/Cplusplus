#include<iostream>
using namespace std;

int SumofNNo(int n){
    int res=0;
    for(int i=1;i<=n;i++){
        res+=i;
        }
        
   return res;
}
int SumofNatN(int n){
    int res =n*((n+1)/2);
    
    return res;

}

int main(){

    // Way 1
    int n;
    cin>>n;
    cout<<SumofNatN(n)<<endl;
    
    cout<<SumofNNo(n)<<endl;
    return 0;
}
 
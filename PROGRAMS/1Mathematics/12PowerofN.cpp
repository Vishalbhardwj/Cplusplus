#include<iostream>
using namespace std;
#include<math.h>

int PowerOfN(int x,int n){
    int temp=pow(x,n/2);
     temp=temp*temp;
    if(n%2==0){
       return temp;
    }
    else{
        return temp*x;
    }
}
int main(){
    int t;
    cin>>t;
    while(t){
        int x,n;
        cin>>x>>n;
        cout<<PowerOfN(x,n)<<endl;
        t--;
    }
    

    
    return 0;
}
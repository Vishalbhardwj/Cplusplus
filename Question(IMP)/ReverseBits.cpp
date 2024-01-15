#include<iostream>
using namespace std;

bool isBitSet(long n,int k){

    return ((n&(1<<(k-1)))!=0);

}
long reverseBits(long n) {
    
    long res=0;

    for(int i=1;i<=32;i++){

        if(isBitSet(n,i)){

            res=res|(1<<(32-i));

        }
    }

    return res;
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        cout<<reverseBits(n)<<endl;
    }

    return 0;
}
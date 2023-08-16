#include<iostream>

using namespace std;

int main(){
    long  long  left,right;
    cin>>left>>right;

    

    long long  and_is=left;
        for(long long i=left+1;i<=right;i++){
            and_is^=i;
        }
    cout<<and_is;
        

   return 0;
}

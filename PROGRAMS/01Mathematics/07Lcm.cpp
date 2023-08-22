#include<iostream>
using namespace std;
#include<math.h>

int Gcd(int c,int d){
    if(d==0){
        return c;
    }
    return Gcd(d,c%d);
}
int Lcm(int c,int d){
    return (c*d)/Gcd(c,d);
}

int main(){

    // Way 1
    // int a,b;
    // cin>>a>>b;
    // int r=max(a,b);
    // while(true){
    //     if(r%a==0&&r%b==0){
    //         cout<<r<<endl;
    //         break;
    //     }
    //     r++;
    // }

    // Way 2 Efficient 
    int c,d;
    cin>>c>>d;
    cout<<Lcm(c,d)<<endl;



    return 0;
}
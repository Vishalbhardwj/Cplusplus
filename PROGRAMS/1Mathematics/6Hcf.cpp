#include<iostream>
using namespace std;
#include<math.h>

int Hcf(int a ,int b){
    if(b==0){
        return a;
    }
    return Hcf(b,a%b);
}

int main(){
    // Way 1
    // int a,b;
    // cin>>a>>b;
    // int res =min(a,b);
    // while(res){
    //     if(a%res==0&&b%res==0){
    //         cout<<res<<endl;
    //         break;
    //     }
    //     res--;
    // }

    // Way 2 Efficient way
    // int c,d;
    // cin>>c>>d;
    // while(c!=d){
    //     if(c>d)
    //         c=c-d;
    //     else
    //         d=d-c;
    // }
    // if(c==d){
    //     cout<<c<<endl;
    // }

    // Way 3 Efficient recursion
    int l,k;
    cin>>l>>k;
    cout<<Hcf(l,k)<<endl;





    







    return 0;
}
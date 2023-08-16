#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
    string columnTitle;
    cin>>columnTitle;

    int ans=0;
    if(columnTitle.length()==1){
      ans=(int(columnTitle[0])-64);
    }else{
        ans=((int(columnTitle[0])-64)*(26))+(int(columnTitle[1])-64);
    }
    cout<<ans<<endl;
    }
    


   return 0;
}
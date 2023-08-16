#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int ab=0;
    if(s.length()<=10){
        cout<<s<<endl;
    }else{
        ab=s.length()-2;
        cout<<s[0]<<ab<<s[s.length()-1]<<endl;
    }
    }


    return 0;
}
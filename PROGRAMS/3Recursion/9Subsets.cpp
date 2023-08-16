#include<iostream>
using namespace std;

void subset(string s,string curr,int i){
if(i==s.length()){
    cout<<curr<<endl;
    return ;
}
subset(s,curr,i+1);
subset(s,curr+s[i],i+1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string curr="";
        subset(s,curr,0);
    }
    return 0;
}
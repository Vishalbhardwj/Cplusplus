#include<iostream>

#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
    string s;
    cin>>s;
    int n=(pow(2,s.length())-1);
    cout<<"\' "<<"\'";
    for(int counter=0;counter<=n;counter++){
    for(int j=0;j<s.length();j++){
        if((((counter)&(1<<j)))!=0){
        cout<<s[j];
        } 
    }
    cout<<" "<<endl;
    }
        t--;
    }
    
    

    return 0;
}
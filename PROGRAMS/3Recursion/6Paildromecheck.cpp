#include<iostream>
using namespace std;

int palindrome(string &s,int start,int end){
    if(start>=end){
        return 1;
    }
    if(s[start]==s[end]){                   // return s[start]==s[end]&&palindrome(s,start+1,end-1); 
        palindrome(s,start+1,end-1);        //you can use above line in place of left side code.
    }else{
        return 0;
    }
}

int main(){


    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int end=s.length()-1;

        cout<<palindrome(s,0,end)<<endl;
    }
    return 0;
}
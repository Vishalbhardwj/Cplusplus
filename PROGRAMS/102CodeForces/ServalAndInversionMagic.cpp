#include<iostream>

using namespace std;

int isPalindrome(string S)
{
    
    for (int i = 0; i < S.length() / 2; i++) {
 
        

        if (S[i] != S[S.length() - i - 1]) {
            
            return 0;
        }
    }
    return 1;
}
string magic(string s,int j){
     if(s[j]=='1')
            s[j]='0';
            else if(s[j]=='0')
            s[j]='1';

            return s;
}
 


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;


  
        string res="NO";
        for(int i=0;i<n;i++)

        for(int j=i+1;j<n;j++){
           
            string x=magic(s,j);

       
            if(isPalindrome(x)){
                res="YES";
                break;
            }
        }
        cout<<res<<endl;

     

    }

    return 0;
}
#include<iostream>
using namespace std;
 
int main(){
  
    string s;
    cin>>s;
 
    
    for(int i=0;i<s.length();i++){
        if((s[i]>='5')&&(i>0||(s[0]!='9'))){
       s[i]='0'+'9'-s[i];            
                
        }
    }
    cout<<s<<endl;
   
    
    
    
    
 
    return 0;
}
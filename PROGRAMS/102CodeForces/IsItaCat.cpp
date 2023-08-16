#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int m=0;
        int e=0;
        int o=0;
        int w=0;
        int last=0;
        for(int i=0;i<n;i++){
 
            if(s[i]!='m'&&s[i]!='M'&&s[i]!='e'&&s[i]!='E'&&s[i]!='o'&&s[i]!='O'&&s[i]!='w'&&s[i]!='W'){
                last+=45;
 
            }
 
            if(s[i]=='m'||s[i]=='M'){
            m=1;
           
            }
            if((s[i]=='e'||s[i]=='E')&&(s[i-1]=='m'||s[i-1]=='M')){
                e=1;
             
            }
            if((s[i]=='o'||s[i]=='O')&&(s[i-1]=='e'||s[i-1]=='E')){
                o=1;
             
            }
            if((s[i]=='w'||s[i]=='W')&&(s[i-1]=='o'||s[i-1]=='O')){
                
                w=1;
                if((s[i+1]!='w'&&s[i+1]!='W'&&(i<n-1))){
                    last=1;
                  
                }
              
            }
            if(i==n-1){
                if((s[i]!='w'&&s[i]!='W')){
                    if(last!=1)
                    w=0;
                    
                   
                }
            }
            
        }
        
 
        int res=0;
        int sum=m+e+o+w+last;
     
        if(sum==4){
          
            res=1; 
        }  
        else
            res=0;
 
        if(res==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        
            
        }
        return 0;
    }
 
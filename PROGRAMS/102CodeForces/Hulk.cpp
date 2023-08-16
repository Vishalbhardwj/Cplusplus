#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s=" ";
    int i=1;

    while(i<=n){
        
        if(i%2==0){
             if(i==n){
            s+=" I love it";
            break;
        }
        s+=" I love that";
        }
        else{
             if(i==n){
            s+=" I hate it";
            break;
        }
        s+=" I hate that"; 
        }
       
       i++; 
    }
    cout<<s<<endl;
    }

   

   return 0;
}
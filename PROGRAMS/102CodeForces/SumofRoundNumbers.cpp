#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int c=1;
        int terms=0;
        for(int i=n.length()-1;i>=0;i--){
            if(n[i]!='0') terms++;
        }
        
        cout<<terms<<endl;

        for(int i=n.length()-1;i>=0;i--){

            if(n[i]!='0')
            cout<<(int(n[i])-48) * c<<" ";
            c*=10;
           
        }
        
    }
    return 0;
}
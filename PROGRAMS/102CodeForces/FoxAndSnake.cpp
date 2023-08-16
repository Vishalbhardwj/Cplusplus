#include<iostream>
using namespace std;
int main(){
    
    
    
    int n,m;
    cin>>n>>m;
    int flag=2;
    for(int i=1;i<=n;i++){

        if(i%2==0 && flag==2){flag=1;}
        else if(i%2==0&&flag==1){flag=2;}  
       
        for(int j=1;j<=m;j++){
           
            if((i%2==0 && j!=m)&&(flag==1)) cout<<".";
            else if((i%2==0 && j!=1) && (flag==2)) cout<<".";
            else cout<<"#";
            
        } 
      
        cout<<endl;
    }
    
   

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    
         int a[5][5];

    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    int count=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
              
                if(i>=2){
                 count+=i-2;   
          
                }else{
                    count+=2-i;
                    
                }
                if(j>=2){
                    count+=j-2;
                    
                }else{
                    count+=2-j;
        

                }
            }

        }
    }
    cout<<count<<endl;
    
   
  
    return 0;
}
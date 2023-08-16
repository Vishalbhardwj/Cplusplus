#include<iostream>
#include<cmath>
using namespace std;

int allequal(int a[],int n){
    int count=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1])
        {
            count++;
            if(count==n){
                return 1;
            }

        }
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=0;
        int min=0;
        while(true){
           
           
                for(int j=0;j<n;j++){
                    if(a[max]<a[j]){
                        max=j;
                    }
                    if(a[min]>a[j]){
                        min=j;
                    }
                    

                 } 
            if(allequal(a,n)){
                cout<<"vishal"<<endl;
                break;
            }
               
                
            
              a[max]=ceil((float)a[max]/(float)a[min]);
            
            // cout<<a[i]<<endl;
          
        }
        
        for(int i=0;i<n;i++){

         cout<<a[i]<<"e"<<" ";  
        }
    }
    return 0;
}
#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int ha[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>ha[i][j];
        }
    }

   
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ha[i][0]==ha[j][1]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    

   return 0;
}
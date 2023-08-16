#include<iostream>

using namespace std;

int main(){
    int x=0;
    int n;
    cin>>n;
    while(n--){
        string s;
        for(int i=0;i<3;i++)
        cin>>s[i];

        
        if(s[1]=='+') x++;
        else
        x--;
      
    }
    cout<<x<<endl;
    return 0;
}
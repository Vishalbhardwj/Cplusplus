#include<iostream>
#include<string>

using namespace std;

int main(){
    int n=10111;
     string s=to_string(n);
    s.reserve();
        int ans=stoi(s);
    cout<<ans;
  



   return 0;
}
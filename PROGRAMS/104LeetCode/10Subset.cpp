#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> v;
    v[0][0]=56;
    v[0][1]=578;
    v[1][0]=421;
    for (int i = 0; i < v.size(); i++) 
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }    
        cout << endl;
    }
    

     



   return 0;
}
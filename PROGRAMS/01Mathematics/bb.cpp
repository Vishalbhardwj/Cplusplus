#include<iostream>
using namespace std;
int main()
{  cout<<"enter the number :"<<endl;
   int x;
   cin>>x;
   int sum=0;
for(int i=1;i<=x;i++)
{
    sum=sum+i;
}
cout<<sum;
    return 0;
}
#include<iostream>
using namespace std;

void PrintNto1(int n){   
    if(n==0){
        return;
    }
    cout<<n<<" ";
      PrintNto1(n-1);
}

void Print1toN(int n){
    if(n==0){
        return ;
    }
    Print1toN(n-1);
    cout<<n<<" ";
}

void Print1toNtail(int n,int k){
    if(n==0){
        return ;
    }
    cout<<k<<" ";
    Print1toNtail(n-1,k+1);
   
}



   


int main(){
    // Way 1 (Printing N to 1 no.s , Its a tail recursive funtion already)
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;
    //     PrintNto1(n);
    //     t--;
    // }

    // Way 2 (Printing no.s 1 to N , It's not tail recursiv function )
    // int t;
    // cin>>t;
    // while(t){
    //     int n;
    //     cin>>n;
    //     Print1toN(n);
    //     t--;
    // }

    // Way 3 (Printing no.s 1 to N , this is a tail recursiv function)

    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        
        Print1toNtail(n,1);
        t--;
    
    }




    
    
    return 0;
}
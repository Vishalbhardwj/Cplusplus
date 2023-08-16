#include<iostream>
using namespace std;

    class complex{
    private: 
    int real;
    int img;
    
    public:

    void Print(){
        cout<<real<<" + i"<<img<<endl;
    }

    complex(int r,int i){
        real=r;
        img=i;
    }

    };

int main(){

    complex c1(45,789);
    complex d1(67,123);
    d1.Print();
    c1.Print();


    return 0;
}
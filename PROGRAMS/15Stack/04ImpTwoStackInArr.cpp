#include<iostream>
using namespace std;

struct twoStack{
    int *arr;
    int cap;
    int top1;
    int top2;
    twoStack(int c){
        arr=new int[c];
        cap=c;
        top1=-1;
        top2=c;
    }
    bool push1(int d){
        if(top1+1>=top2) return false;
        top1++;
        arr[top1]=d;
        return true;
    }
    bool push2(int d){
        if(top2-1<=top1) return false;
        top2--;
        arr[top2]=d;
        return true;
    }
    int pop1(){
        if(top1==-1) return INT16_MIN;
        int res=arr[top1];
        top1--;
        return res;
    }
    int pop2(){
        if(top2==cap) return INT16_MIN;
        int res=arr[top2];
        top2++;
        return res;
    }
    int size1(){
        return top1+1;
    }
    int size2(){
        return cap-top2;
    }
    

};

int main(){
    twoStack ts(5); 
    cout<<ts.push1(5)<<endl; 
    cout<<ts.push2(10)<<endl; 
    cout<<ts.push2(15)<<endl; 
    cout<<ts.push1(11)<<endl; 
    cout<<ts.push2(7)<<endl; 
    cout << "Popped element from stack1 is "<<ts.pop1()<<endl; 
    cout<<ts.push2(40)<<endl; 
    cout << "\nPopped element from stack2 is "<< ts.pop2()<<endl; 
    cout<<ts.push1(10090)<<endl;
    cout<<ts.push2(123418)<<endl;
    cout<<ts.push1(99)<<endl;
    cout<<ts.push2(9080)<<endl;

    return 0;
}
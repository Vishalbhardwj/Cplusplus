#include<iostream>
using namespace std;

    // Templates: Writes code Ones,Use for any data type.

    // Two types of template:
    // 1.function templates: sort,linear search ,binary search etc.
    // 2.class templates: stack,queue,deque.


    //1.Function Templates:

    template<typename t>
    t myMax(t x,t y){
        return (x>y)? x:y;
    }

    template<typename a,int limit>
    a arrMax(a arr[],int n){
        if(n>limit){
            cout<<"Out of Limit!"<<endl;
            return -1;
        }
        a res = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>res){
                res=arr[i];
            }
        }
        return res;
    }


    //2.Class Templates:
    template<class t>
    struct paair{
        t x,y;
        paair(t i,t j){
            x=i;
            y=j;
        }
        t getFirst(){
            return x;
        }
        t getSecond(){
            return y;
        }
    };

    







int main(){
    cout<<myMax<int>(3,7)<<endl;
    cout<<myMax<char>('c','t')<<endl;

    int arr1[]={134,56,78,341,351,382,390};
    float arr2[]={1.09908,34.999,51.456};
    cout<<arrMax<int,5>(arr1,7)<<endl;
    cout<<arrMax<float,45>(arr2,3)<<endl;


    paair<int>p1(123,456),p2(891,99999);
    cout<<p1.getFirst()<<endl<<p1.getSecond()<<endl;
    cout<<p2.getFirst()<<endl<<p2.getSecond()<<endl;
    


    
    return 0;
}
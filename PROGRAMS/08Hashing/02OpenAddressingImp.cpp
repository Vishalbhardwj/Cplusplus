#include<iostream>
using namespace std;

struct myHash{
    int *arr;
    int cap,size;

    myHash(int c){
        cap=c;
        size=0;
        arr=new int[cap];
        for(int i=0;i<cap;i++){
            arr[i]=-1;                    // Means myHash is empty.
        }

    }
    int hash(int key){
        return key%cap;
    }

    bool search(int key){

        int h = hash(key);
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key){
                return true;
            }
            i=(i+1)%cap;
            if(i==h){
                return false;
            }
        }
        return false;

    }

    bool insert(int key){
        if(size==cap){
            return false;
        }
        int h = hash(key);
        int i=h;
        while((arr[i]!=-1)&&(arr[i]!=-2)&&(arr[i]!=key)){
            i=(i+1)%cap;
        }
        if(arr[i]==key){
            return false;
        }else{
            arr[i]=key;
            size++;
            return true;
        }
    }

    bool erase(int key){
        int h=hash(key);
        int i=h;
        
        while(arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                return true;
            }
            i=(i+1)%cap;
            if(i==h){
                return false;
            }
        }
        return false;

    }
};


int main(){

    myHash o1(8);
    o1.insert(56);
    o1.insert(100203);
    o1.insert(73);
    o1.insert(45);
    if(o1.search(100203)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    o1.erase(100203);

    if(o1.search(100203)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    if(o1.search(73)) {
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    } 
    if(o1.search(102)) {
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    } 
    
    
    
    return 0;
}
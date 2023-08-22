#include<iostream>
using namespace std;

    struct node{
        int data;
        node *next;
        node(int x){
            data=x;
            next=NULL;
        }
    };

    // Iterative approach search:



    int search(node *head,int k){
        int pos=0;
        while(head!=NULL){
            pos++;
            if(head->data==k){
                return pos;
            }
            head=head->next;
        }
        return -1;
    }


    // Recursion approach search:

    int Rsearch(node *head,int key){
        if(head==NULL) return -1;
        if(head->data==key){
            return 1;
        } else
        {   int res=Rsearch(head->next,key);
            if(res==-1) return -1;
            else return (res+1);
        }
    }



    // Tail recursive of Recursion approach search:  This is best and Easy as well:

    int Search(node *head,int k,int pos=0){

        if(head==NULL)  return -1;    

        pos++;
        if(head->data==k){
            return pos;
        }
        
        Search(head->next,k,pos);
    }





int main(){
    node *head=new node(20);
    head->next=new node(30);
    head->next->next=new node(50);
    head->next->next->next=new node(98);

    cout<<search(head,20)<<endl;
    cout<<Search(head,30)<<endl;
    cout<<Rsearch(head,30)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

    struct node{
        int data;
        node* next;
        node(int d){
            data=d;
            next=NULL;
        }
    };

    struct mystack{
        node *head;
        int size;

        mystack(){              // Contructor :
            head=NULL;
            size=0;
        }

        void push(int x){       //Push fuction:
        node *temp=new node(x);
        temp->next=head;
        head=temp;
        size++;

        }

        int pop(){                  // pop function:
            if(head==NULL){        // THROUGH THIS WE ARE HANDELLING UNDERFLOW CONDITION:
                return INT16_MAX;
            }
            int res=head->data;
            node *temp=head;
            head=head->next;
            size--;
            return res;
        }

        int ssize(){                 // size function:
            return size;
        }

        int peek(){                 // peek fuction:
            if(head==NULL){        //  THROUGH THIS WE ARE HANDELLING UNDERFLOW CONDITION:
                return INT16_MAX;
            }
            return head->data;
        }

        int empty(){                // empty fuction:
            return (head==NULL);
        }

    };

int main(){
    mystack s;
    s.push(34);
    s.push(23);
    s.push(45);
    cout<<s.peek()<<endl;
    cout<<s.ssize()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.ssize()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.ssize()<<endl;
    cout<<s.pop()<<endl;  // returning INT_MAX,It means you can't pop an element cuz of Empty stack:



    return 0;
}
#include<iostream>
#include<queue>
using namespace std;

struct node{
    int key;
    node *left,*right;

    node(int k){
        key=k;
        left=right=NULL;
    }
};


node * contructBt(int inord[],int preord[],int s,int e){
    if(s>e){return NULL;}
    static int preindex  = 0;
    node *root=new node(preord[preindex++]);

    int inindex=0;
    for(int i=s;i<=e;i++){
        if(root->key==inord[i]){
            inindex=i;
            break;
        }
    }
    root->left=contructBt(inord,preord,s,inindex-1);
    root->right=contructBt(inord,preord,inindex+1,e);

    return root;
}

void InorderTrav(node *root){
    if(root!=NULL){
        InorderTrav(root->left);
        cout<<root->key<<" ";
        InorderTrav(root->right);
    }
}








int main(){
    
    cout<<"Input n:"<<endl;
    int n;
    cin>>n;
    int inord[n],preord[n];
    cout<<"Input Inorder:"<<endl;
    for(int i=0;i<n;i++){
        cin>>inord[i];
    }
    cout<<"Input Preorder:"<<endl;
    for(int i=0;i<n;i++){
        cin>>preord[i];
    }

   
    
    node *root=contructBt(inord,preord,0,n-1);
    cout<<endl;
    cout<<"check It:"<<endl;
    InorderTrav(root);
    cout<<endl;






    


    

    

    
    
    
    
    return 0;
}
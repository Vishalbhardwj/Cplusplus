void PrintList(node * head){
    node *cur=head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}
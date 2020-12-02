//only the removeDuplicates function is written;

#include<iostream>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
Node *removeDuplicates(Node *root)
{
    Node *p=root;
    int i=0;
    while(p->next!=NULL){
        Node *temp=p->next;
        if(p->data==temp->data){
            p->next=temp->next;
            delete temp;
        }
        else
            p=p->next;
    }
    return root;
}
void print(Node *root){
    while(root!=NULL){
        cout<<root->data;
        root=root->next;
    }
}
int main(){
    Node *root=new Node(2);
    Node* temp=new Node(2);
    Node* tem=new Node(5);
    root->next=temp;
    temp->next=tem;
    root=removeDuplicates(root);
    print(root);
    return 0;
}
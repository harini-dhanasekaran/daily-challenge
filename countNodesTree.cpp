#include<iostream>
using namespace std;
struct Node{
    Node *left;
    int data;
    Node *right;
    Node(int x){data = x;left = NULL;right = NULL;}
};
Node *root = NULL;
void insert(int data){
    Node *c,*t=root,*r;
    if(root==NULL){
        c=new Node(data);
        root=c;
        return;
    }
    while(t!=NULL){
        r=t;
        if(data>t->data)
          t=t->right;
        else if(data<t->data)
          t=t->left;
        else
          return;
    }
    c=new Node(data);
    if(data>r->data)
      r->right=c;
    else if(data<r->data)
      r->left=c;
}
int countNodes(Node *p){
    int x=0,y=0;
    if(p==NULL)
      return 0;
    x=countNodes(p->left);
    y=countNodes(p->right);
    return x+y+1;
}
int main(){
    insert(10);
    insert(5);
    insert(20);
    insert(15);
    insert(7);
    cout<<countNodes(root);
    return 0;
}
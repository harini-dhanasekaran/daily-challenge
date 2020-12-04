#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){data=x;left=NULL;right=NULL;}
};
Node *root=NULL;
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
void lvlTraversal(){
    queue<Node*> que;
    Node* p=root;
    que.push(p);
    while(!que.empty()){
      p=que.front();
      que.pop();
      cout<<p->data<<" ";
      if(p->left!=NULL)
        que.push(p->left);
      if(p->right!=NULL)
        que.push(p->right);
    }
}
int main() {
    insert(10);
    insert(5);
    insert(20);
    insert(2);
    insert(15);
    insert(7);
    insert(25);
    lvlTraversal();
    return 0;
}
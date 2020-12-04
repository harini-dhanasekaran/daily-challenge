#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* left;
    int data;
    Node* right;
    Node(int x){data = x;left = NULL;right = NULL;}
};
Node *root=NULL;
void insert(int data){
    Node *t=root,*r,*c;
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
int getHeight(Node *p){
    int x,y;
    if(p==NULL)
      return 0;
    x=getHeight(p->left);
    y=getHeight(p->right);
    return x>y?x+1:y+1;
}
void lvlsum(Node *p,int sum[],int lvl){
    if(p==NULL)
      return;
    sum[lvl]+=p->data;
    lvlsum(p->left,sum,lvl+1);
    lvlsum(p->right,sum,lvl+1);
}
int main() {
    insert(10);
    insert(5);
    insert(20);
    insert(2);
    insert(15);
    insert(7);
    insert(25);
    int height =getHeight(root),min=INT_MAX;
    int sum[height]={0};
    lvlsum(root,sum,0);
    for(int i=0;i<height;i++)
        if(min>sum[i])
          min=sum[i];   
    cout<<min;
    return 0;
}
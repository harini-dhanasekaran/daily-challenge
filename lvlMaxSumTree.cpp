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
int getHeight(Node* p){
    int x,y;
    if(p==NULL)
      return 0;
    x=getHeight(p->left);
    y=getHeight(p->right);
    return (x>y)?x+1:y+1;
}
void lvlSum(Node *p,int sum[],int lvl){
    if(p==NULL)
      return;
    sum[lvl]+=p->data;
    lvlSum(p->left,sum,lvl+1);
    lvlSum(p->right,sum,lvl+1);
}
int main(){
    insert(10);
    insert(5);
    insert(20);
    insert(2);
    insert(15);
    insert(7);
    insert(25);
    int hgt=getHeight(root),max=INT_MIN;
    int sum[hgt]={0};
    lvlSum(root,sum,0);
    for(int i=0;i<hgt;i++)
      if(max<sum[i])
        max=sum[i];
    cout<<max;
    return 0;
}
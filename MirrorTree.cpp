/*
https://practice.geeksforgeeks.org/problems/mirror-tree/1/?company[]=Amazon&page=1&query=company[]Amazonpage1#
*/
void mirror(Node *root){
    if(root!=NULL) return;
    mirror(root->left);
    mirror(root->right);
    Node *temp=root->left;
    root->left=root->right;
    root->right=temp;
}
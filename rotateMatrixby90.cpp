#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &mat){
    int r=mat.size();
    int c=mat[0].size();
    for(int i=0;i<r;i++)
      reverse(mat[i].begin(),mat[i].end());
    for(int i=0;i<r;i++)
      for(int j=i;j<c;j++)
        swap(mat[i][j],mat[j][i]);
}
int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
    rotate(mat);
    for(int i=0;i<mat.size();i++){
      for(int j=0;j<mat[i].size();j++)
        cout<<mat[i][j];
      cout<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int substring(string s){
    vector<int> dict(256,-1);
    int result=0,start=-1;
    for(int i=0;i<s.length();i++){
        if(dict[s[i]]>start)
          start=dict[s[i]];
        dict[s[i]]=i;
        result=max(result,i-start);
    }
    return result;
}
int main(){
    string s="iooitp!p";
    cout<<substring(s);
    return 0;
}
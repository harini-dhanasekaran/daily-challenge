#include <bits/stdc++.h>
using namespace std;
vector<string> generate(long long n){
    vector<string> ans;
    queue<string> q;
    q.push("1");
    while(n--){
      string curr=q.front();
      ans.push_back(curr);
      q.pop();
      q.push(curr+"0");
      q.push(curr+"1");
    }
    return ans;
}

int main() {
    long long n=20;
    vector<string> result=generate(n);
    for(auto &i:result){
        cout<<i<<endl;
    }
    return 0;
}
#include <iostream>
#include <map>
#include <string>
using namespace std;
bool isAnagram(string a, string b){
    if(a.length()!=b.length())return 0;
    map<char,char> check;
    for(int i=0;i<a.length();i++){
        check[a[i]-'a']++;
        check[b[i]-'a']--;
    }
    for(int i=0;i<check.size();i++){
        if(check[i]!=0)
          return 0;
    }
    return 1;
    //another method
    // if(a.length()!=b.length())return 0;
    // sort(a.begin(),a.end());
    // sort(b.begin(),b.end());
    // if(a==b)return 1;
    // else return 0;
}
int main(){
    string a="good",b="dogo";
    cout<<isAnagram(a,b);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int totalPpl,pairs,result=0;
    cin>>totalPpl>>pairs;
    map<int,int> map;
    vector<int> save;
    int first,second;
    cin>>first>>second;
    if(find(save.begin(),save.end(),first)==save.end()){
        save.push_back(first);
        save.push_back(second);
    }
    map[first]++;
    map[second]++;
    result++;
    for(int i=1;i<=pairs;i++){
        cin>>first>>second;
        if(find(save.begin(),save.end(),first)==save.end()){
            save.push_back(first);}
        if(find(save.begin(),save.end(),second)==save.end()){save.push_back(second);}
        if(map.find(first)!=map.end() || map.find(second)!=map.end()){
            
			continue;
        }
        else{
            result++;
            if(map.find(first)==map.end())
                map[first]++;
            if(map.find(second)==map.end())
                map[second]++;
        }
    }
    cout<<"good";
    for(int i=0;i<totalPpl;i++){
        if(find(save.begin(),save.end(),i)==save.end())
           result++; 
    }
    cout<<result;
    return 0;
}
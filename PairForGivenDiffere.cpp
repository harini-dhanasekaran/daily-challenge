#include <bits/stdc++.h>
using namespace std;
int check(vector<int>& mem,int dif){
    int temp;
    for(int i=0;i<mem.size();i++){
        temp=dif+mem[i];
        if(find(mem.begin(),mem.end(),temp)!=mem.end()){
            return 1;
        }
    }
    return -1;
}
int main() {

	int testCase;
	cin>>testCase;
	while(testCase--){
	    int size,dif;
	    cin>>size>>dif;
	    vector<int> ar;
        int temp;
	    for(int i=0;i<size;i++){
            cin>>temp;
            ar.push_back(temp);
        }
	    cout<<check(ar,dif)<<endl;
	}
	return 0;
}
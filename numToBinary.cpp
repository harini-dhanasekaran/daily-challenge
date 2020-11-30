//to convert a given number to its binary representation(base2)
#include <iostream>
using namespace std;
void bin(int n){
    for(int i=30;i>=0;i--){
        if(n&(1<<i))
          cout<<1;
        else 
          cout<<0;
    }
}
int main(){
    int num=16;
    bin(num);
    return 0;
}
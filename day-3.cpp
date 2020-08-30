//Run-length encoding is a fast and simple method of encoding strings. The basic idea is to represent repeated successive characters as a single count and character. For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".

//Implement run-length encoding and decoding. You can assume the string to be encoded have no digits and consists solely of alphabetic characters. You can assume the string to be decoded is valid.

#include <iostream>
#include <string>
using namespace std;
int main(){
    string message = "AAAABBBCCDZZZZZZ",result="";
    char single=message[0];
    int count=1;
    for(int i=1;single !=NULL;i++){
        if(single != message[i]){
            result+=to_string(count);
            result+=single;
            single=message[i];
            count=1;
        }
        else
        {
            count++;
            single=message[i];
        }
    }
    cout<<result;
    return 0;
}

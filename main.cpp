#include <iostream>
using namespace std;
#include "ro.h"

int main(){

cout<<"Please enter message \r\n>";
string mess = GetStr();
int m_len=GetLen(mess);
string encrypted;
for(int i = 0;i<m_len;i++){
    char ch = mess[i];
    ch-=97;
    ch+=13;
    ch%=26;
    encrypted+=ch+97;
}
cout<<encrypted<<endl;
string decrypted;
for(int i = 0;i<m_len;i++){
    char ch = encrypted[i];
    ch-=97;
    ch+=13;
    ch%=26;
    decrypted+=ch+97;
}
cout<<decrypted;
return 0;
}

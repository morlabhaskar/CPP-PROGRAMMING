#include<iostream>
#include<clocale>
using namespace std;
int main(){
    wchar_t ch;
    setlocale(LC_CTYPE,"");
    for(ch=2304;ch<2431;ch++){
        wcout<<ch<<" ";
    }
}
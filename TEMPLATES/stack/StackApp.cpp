#include<iostream>
using namespace std;
#define MAX 5
#include "GenericStack.cpp"

int main(){
    char ch;
    cout<<"i:Interger c:Char  s:String  f:Float"<<endl;
    Stack<int>iobj;
    Stack<char>cobj;
    Stack<string>sobj;
    Stack<float>fobj;
    cin>>ch;
    switch(ch){
        case 'i':
            iobj.Menu();
            break;
        case 'c':
            cobj.Menu();
            break;
        case 's':
            sobj.Menu();
            break;
        case 'f':
            fobj.Menu();
            break;
    }
}

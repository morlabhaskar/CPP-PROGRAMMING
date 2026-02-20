#include<iostream>
#include<fstream>
using namespace std;
//a.out  sourcefile
int main(int argc,char *argv[]){
    if(argc!=2){
        cout<<"Incorrect Inputs"<<endl;
        exit(1);
    }
    fstream iofile(argv[1],ios::in|ios::out);
    if(!iofile){
        cerr<<"File Not Open"<<endl;
        exit(1);
    }
    char ch;
    while(iofile.get(ch)){
        switch(ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            iofile.seekp(-1,ios::cur);
            iofile<<'#';
            iofile.seekg(iofile.tellp(),ios::beg);
            break;
        }
    }
}

/*
morla
bhaskar
nani

m#rl#
bh#sk#r
n#n#
*/
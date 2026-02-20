#include<iostream>
#include<fstream>
using namespace std;
//a.out  sourcefile   destfile
int main(int argc,char *argv[]){
    int ch;
    ifstream src;
    ofstream dest;
    if(argc!=3){
        cout<<"Incorrect Inputs"<<endl;
        exit(1);
    }
    src.open(argv[1]);
    dest.open(argv[2]);
    while((ch=src.get())!=EOF){
        dest.put(ch);
    }
    src.close();
    dest.close();
}
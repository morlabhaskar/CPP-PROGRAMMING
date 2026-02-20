#include<iostream>
#include<fstream>
using namespace std;
//a.out  sourcefile destfile
int main(int argc,char *argv[]){
    char ch,*buf;
    ifstream src;
    ofstream dest;
    if(argc!=3){
        cout<<"Incorrect Inputs"<<endl;
        exit(1);
    }
    src.open(argv[1]);
    dest.open(argv[2]);
    
    src.seekg(0,ios::end);
    int size = src.tellg();
    // cout<<"Size : "<<size<<endl;
    src.seekg(0,ios::beg);
    buf=new char[size];
    src.read(buf,size);
    dest.write(buf,size);
    delete[] buf;

    src.close();
    dest.close();
}
#include<iostream>
#include<fstream>
using namespace std;
//a.out  sourcefile
int main(int argc,char *argv[]){
    string str;
    ifstream src;
    if(argc!=2){
        cout<<"Incorrect Inputs"<<endl;
        exit(1);
    }
    src.open(argv[1]);
    cout<<src.tellg()<<endl;
    src.seekg(2,ios::beg);
    cout<<src.tellg()<<endl;
    getline(src,str);
    cout<<str<<endl;
    cout<<src.tellg()<<endl;
    src.seekg(2,ios::cur);
    getline(src,str);
    cout<<str<<endl;
    cout<<src.tellg()<<endl;
    src.seekg(-3,ios::end);
    getline(src,str);
    cout<<str<<endl;
    cout<<src.tellg()<<endl;
    src.close();
}
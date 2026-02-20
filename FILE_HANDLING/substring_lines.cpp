#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
//a.out  filename   substring
int main(int argc,char *argv[]){
    if(argc!=3){
        cout<<"Invalid Inputs"<<endl;
        exit(1);
    }
    char str[100];
    ifstream src(argv[1]);
    while(src){
        src.getline(str,100);
        if(strstr(str,argv[2])){
            cout<<str<<endl;
        }
    }
    src.close();
}
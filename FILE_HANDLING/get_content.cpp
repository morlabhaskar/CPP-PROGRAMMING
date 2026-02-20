#include<fstream>
#include<iostream>
#include<string>
using namespace std;
//a.out  sourcefile
int main(int argc,char *argv[]){
    if(argc!=2){
        cout<<"Invalid Inputs"<<endl;
        exit(1);
    }
    ifstream inf(argv[1]);//inf.open(argv[1])
    if(!inf){
        cout<<"file Not Open"<<endl;
        exit(1);
    }
    while(inf){
        string str;
        // inf>>str;
        getline(inf,str);
        cout<<str<<endl;
    }
    inf.close();
}

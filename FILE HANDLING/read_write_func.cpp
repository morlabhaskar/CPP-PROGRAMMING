#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
char *readFromFile(char *filename){
    ifstream src(filename);
    if(!src){
        cout<<"File is Not Open"<<endl;
        exit(1);
    }
    char *p;
    long int size;
    src.seekg(0,ios::end);
    size=src.tellg();
    size++;//for '\0'
    src.seekg(0,ios::beg);
    p=new char[size];
    src.read(p,size);
    p[size-1]='\0';
    src.close();
    return p;
}
void writeToFile(char *p,char *filename){
    ofstream dest(filename);
    dest.write(p,strlen(p));
    dest.close();
}
//a.out  sourcefile destfile
int main(int argc,char *argv[]){
    if(argc!=3){
        cout<<"Incorrect Inputs"<<endl;
        exit(1);
    }
    char *buf=NULL;
    buf=readFromFile(argv[1]);
    writeToFile(buf,argv[2]);
    delete[] buf;
}
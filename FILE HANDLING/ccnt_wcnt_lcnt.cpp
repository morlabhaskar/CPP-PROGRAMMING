#include<iostream>
#include<fstream>
using namespace std;
char *readFromFile(char *filename){
    
}
//a.out  filename
int main(int argc,char *argv[]){
    if(argc!=2){
        cout<<"Invalid Inputs"<<endl;
        exit(1);
    }
    char *buf=NULL;
    long long int ccnt,wcnt,lcnt;
    buf=readFromFile(argv[1]);
}
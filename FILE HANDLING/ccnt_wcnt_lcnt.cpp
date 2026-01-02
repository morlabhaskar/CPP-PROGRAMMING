#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
char *readFromFile(char *filename){
    ifstream src(filename);
    if(!src){
        cout<<"File is Not Opened"<<endl;
        exit(1);
    }
    char *p=NULL;
    src.seekg(0,ios::end);
    long int size;
    size = src.tellg();
    src.seekg(0,ios::beg);
    p=new char[size+1];
    src.read(p,size);
    p[size]='\0';
    src.close();
    return p;
}
long long int searchChar(char *p,char ch){
    long long int cnt=0;
    while(p=strchr(p,ch)){
        cnt++;
        p++;
    }
    return cnt;
}
//a.out  filename
int main(int argc,char *argv[]){
    if(argc!=2){
        cout<<"Invalid Inputs"<<endl;
        exit(1);
    }
    char *buf=NULL;
    long long int ccnt,wcnt,lcnt,scnt;
    buf=readFromFile(argv[1]);
    ccnt=strlen(buf);
    wcnt=searchChar(buf,32);
    lcnt=searchChar(buf,10);
    scnt=searchChar(buf,97);
    cout<<"File : "<<buf<<endl;
    cout<<"ccnt : "<<ccnt<<endl;
    cout<<"wcnt : "<<wcnt<<endl;
    cout<<"lcnt : "<<lcnt<<endl;
    cout<<"scnt : "<<scnt<<endl;
}
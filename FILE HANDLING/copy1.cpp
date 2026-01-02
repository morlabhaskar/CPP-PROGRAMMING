// #include<iostream>
#include<fstream>
using namespace std;
//a.out  sourcefile   destfile
int main(int argc,char *argv[]){
    char str[100];
    ifstream src;
    ofstream dest;
    src.open("source.txt");//open in read mode
    dest.open("dest.txt");//open in write mode
    while(!src.eof()){
        src>>str;
        dest<<str;
    }
    src.close();
    dest.close();
}
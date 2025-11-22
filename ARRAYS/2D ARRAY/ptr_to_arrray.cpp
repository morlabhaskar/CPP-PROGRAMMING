#include<iostream>
using namespace std;
#define ROW 3
#define COL 2
int **Input(int **p){
    p=new int*[ROW];
    for(int i=0;i<ROW;i++){
        p[i]=new int[COL];
        for(int j=0;j<COL;j++){
            cin>>p[i][j];
        }
    }
    return p;
}
void Print(int **p){
    cout<<"Array is : "<<endl;
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int **ptr=NULL;
    ptr=Input(ptr);
    Print(ptr);
    for(int i=0;i<ROW;i++){
        delete []ptr[i];
    }
    delete []ptr;
}
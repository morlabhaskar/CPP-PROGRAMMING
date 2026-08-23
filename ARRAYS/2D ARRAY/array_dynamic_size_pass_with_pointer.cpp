#include<iostream>
using namespace std;
int **input(int **ptr,int n){
    ptr = new int*[n];
    for(int i=0;i<n;i++){
        ptr[i] = new int[n];
        for(int j=0;j<n;j++){
            cin>>ptr[i][j];
        }
    }
    return ptr;
}
void print(int **ptr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void freeMemory(int **ptr,int n){
    for(int i=0;i<n;i++){
        delete[] ptr[i];
    }
    delete[] ptr;
}
int main(){
    int **ptr=nullptr;
    cout<<"Enter array elements :"<<endl;
    ptr = input(ptr,2);
    cout<<"Array is :"<<endl;
    print(ptr,2);
    freeMemory(ptr,2);
}
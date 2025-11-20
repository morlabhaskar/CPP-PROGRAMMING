#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    ptr=new int;//allocate memory 4 bytes in heap
    cout<<"Enter a Number :"<<endl;
    cin>>*ptr;
    cout<<"Value is :"<<*ptr<<endl;
    delete ptr;//de allocate memory 4 bytes in heap
    ptr=NULL;//ptr=NULL to avoid dangling pointer
}
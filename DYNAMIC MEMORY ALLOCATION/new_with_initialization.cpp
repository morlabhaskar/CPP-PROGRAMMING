#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    cout<<"Enter a Number :"<<endl;
    ptr=new int(10);//allocate memory 4 bytes in heap
    cout<<"Value is : "<<*ptr<<endl;
    delete ptr;//de allocate memory 4 bytes in heap
    ptr=NULL;//ptr=NULL to avoid dangling pointer
}
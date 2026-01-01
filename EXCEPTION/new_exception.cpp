#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    try{
        ptr=new int[0xffffffff];
        if(ptr==NULL){//new NEVER returns NULL on failure .It throws std::bad_alloc
            cout<<"Memory Allocation Failed"<<endl;
        }
        else{
            for(int i=0;i<1000;i++){
                ptr[i]=i;
            }
            for(int i=0;i<1000;i++){
                cout<<ptr[i]<<" ";
            }
            cout<<endl;
        }
        delete[] ptr;
    }
    catch(bad_alloc &a){
        cout<<"Failed"<<endl;
    }
}
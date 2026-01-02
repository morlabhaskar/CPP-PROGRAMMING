#include<iostream>
using namespace std;
class Singleton{
    int data;
    static bool flag;
    static Singleton *ptr;
    Singleton(){
        cout<<"Private Constructor"<<endl;
        cout<<"Enter the Data :"<<endl;
        cin>>data;
    }
    public :
        void Print(){
            cout<<"Data : "<<data<<endl;
        }
        static Singleton * CreateInstance(){
            if(flag==false){
                ptr=new Singleton;
                flag=true;
                return ptr;
            }
            return NULL;
        }
        ~Singleton(){
            cout<<"Object Destroyed"<<endl;
            flag=false;
        }
};
bool Singleton :: flag=false;
Singleton * Singleton :: ptr=NULL;
int main(){
    Singleton *p1,*p2;
    p1=Singleton::CreateInstance();
    if(p1==NULL){
        cout<<"Cannot create object as it is already existing"<<endl;
    }
    else{
        p1->Print();
        delete p1;
    }
    p2=Singleton::CreateInstance();
    if(p2==NULL){
        cout<<"Cannot create object as it is already existing"<<endl;
    }
    else{
        p2->Print();
        delete p2;
    }
}
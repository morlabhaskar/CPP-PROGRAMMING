#include<iostream>
#include<cstring>
#include<ctime>
using namespace std;
#define SUBJECTS 6
class Student{
    int id;
    char name[20];
    float marks[SUBJECTS];
    float per;
    float totmarks;
    char grade[3];
    public:
        void Input(){
            srand(time(0));
            id = rand()%(9999-1111+1)+1111;
            cout<<"Enter Name :"<<endl;
            cin>>name;
            cout<<"Enter Marks :"<<endl;
            for(int i=0;i<SUBJECTS;i++){
                cin>>marks[i];
            }
            totmarks=per=0;
        }
        void TotMarks(){
            for(int i=0;i<SUBJECTS;i++){
                totmarks += marks[i];
            }
        }
        void CalPer(){
            per = totmarks/SUBJECTS;
        }
        void Grade(){
            if(per<30)
                strcpy(grade,"F");
            else if(per>=30 && per<50)
                strcpy(grade,"D");
            else if(per>=50 && per<60)
                strcpy(grade,"C");
            else if(per>=60 && per<70)
                strcpy(grade,"B");
            else if(per>=70 && per<80)
                strcpy(grade,"B+");
            else if(per>=80 && per<90)
                strcpy(grade,"A");
            else
                strcpy(grade,"A+");

        }
        void Print(){
            cout<<"Id : "<<id<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Marks : ";
            for(int i=0;i<SUBJECTS;i++){
                cout<<marks[i]<<" ";
            }
            cout<<endl;
            cout<<"Percentage : "<<per<<endl;
            cout<<"Total Marks : "<<totmarks<<endl;
            cout<<"Grade : "<<grade<<endl;
        }
};
int main(){
    Student obj;
    obj.Input();
    obj.TotMarks();
    obj.CalPer();
    obj.Grade();
    obj.Print();
}
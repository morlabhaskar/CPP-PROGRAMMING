#include<iostream>
using namespace std;
class Student{
    protected : 
        int id;
        char name[20];
        char email[20];
        char addr[20];
    public :
        Student(){
            cout<<"Enter the Student Id :"<<endl;
            cin>>id;
            cout<<"Enter the Student Name :"<<endl;
            cin>>name;
            cout<<"Enter the Student Email :"<<endl;
            cin>>email;
            cout<<"Enter the Student Address :"<<endl;
            cin>>addr;
        }
        void SPrint(){
            cout<<"Student Id : "<<id<<endl;
            cout<<"Student Name : "<<name<<endl;
            cout<<"Student Email : "<<email<<endl;
            cout<<"Student Address : "<<addr<<endl;
        }
        ~Student(){
            cout<<"Student Destructor "<<endl;
        }
};
class Exam : public Student{
    protected : 
        float marks[6];
    public : 
        Exam(){
            cout<<"Exam Constructor"<<endl;
            for(int i=0;i<6;i++){
                cout<<"Enter the Marks :"<<endl;
                cin>>marks[i];
            }
        }
        void EPrint(){
            for(int i=0;i<6;i++){
                cout<<marks[i]<<" ";
            }
            cout<<endl;
        }
        ~Exam(){
            cout<<"Exam Destructor"<<endl;
        }
};
class Result : public Exam{
    float totMarks,per;
    public :
        Result(){
            cout<<"Result Constructor"<<endl;
            totMarks=per=0;
        }
        void CalMarks(){
            for(int i=0;i<6;i++){
                totMarks += marks[i];
            }
        }
        void CalPer(){
            per = totMarks/6;
        }
        void RPrint(){
            cout<<"Total Marks : "<<totMarks<<endl;
            cout<<"Percentage : "<<per<<endl;
        }
        ~Result(){
            cout<<"Result Destructor"<<endl;
        }
};
int main(){
    Result obj;
    obj.CalMarks();
    obj.CalPer();
    obj.SPrint();
    obj.EPrint();
    obj.RPrint();
}
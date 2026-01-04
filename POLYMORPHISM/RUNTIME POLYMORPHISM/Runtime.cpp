#include<iostream>
using namespace std;

class Parent{
	protected :
        int age;
	    char name[20];
	public :  
        Parent(){
			cout<<"Parent Constructor:"<<endl;
			cout<<"enter the age:"<<endl;
			cin>>age;
			cout<<"enter the name:"<<endl;
			cin>>name;
		}
		virtual  void Print(){
			cout<<"age:"<<age<<endl;
			cout<<"name:"<<name<<endl;
		}
		virtual void Whomi(){
			cout<<"Iam a parent :"<<endl;
		}
};

class Child : public Parent{
	public : 
		Child(){
			cout<<"Child Constructor:"<<endl;
		}
		void Print(){
			cout<<"Child Print:"<<endl;
		}
		void Whomi(){
			cout<<"Iam A Child:"<<endl;
		}
};
int main(){
	Child cobj;
	Parent *ptr;
	ptr=&cobj;
	ptr->Print();
	ptr->Whomi();
}


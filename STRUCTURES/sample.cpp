#include<iostream>
#include<cstring>
using namespace std;

struct Bank{
	int accno;
	char name[20];
	float bal;
	// public ://not mandotary
        void Deposit(float amt){
		    bal+=amt;
	    }
	    bool WithDrawal(float amt){
		    if(amt<=bal){
			    bal-=amt;
			    return true;
		    }
		    return false;
	    }
	    void BalEnq(){
		    cout<<"Balance available in ur acc is :"<<bal<<endl;
	    }
	    void Print(){
		    cout<<"accno:"<<accno<<endl;
		    cout<<"name:"<<name<<endl;
		    cout<<"bal:"<<bal<<endl;
	    }
	    void CreateAcc(){
		    cout<<"enter the accno:"<<endl;
		    cin>>accno;
		    cout<<"enter the name:"<<endl;
		    cin>>name;
		    cout<<"enter the bal:"<<endl;
		    cin>>bal;
	    }
};
int main(){
	struct Bank myacc;
	myacc.CreateAcc();
	myacc.Print();
	myacc.Deposit(34000);
	myacc.bal-=1000;
	myacc.BalEnq();
}
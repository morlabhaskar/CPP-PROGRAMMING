#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;
class Bank{
    int acc_no;
    char name[20];
    float balance;
    public:
        void deposit(float amt){
            balance += amt;
        }
        bool withdrawal(float amt){
            if(balance>=amt){
                balance -= amt;
                return true;
            }
            return false;
        }
        void balanceEnq(){
            cout<<"Account Balance is : "<<balance<<endl;
        }
        void createAcc(){
            srand(time(0));
            acc_no = rand()%10000;
            cout<<"Enter Name :"<<endl;
            cin>>name;
            cout<<"Enter Balance :"<<endl;
            cin>>balance;
        }
        void Print(){
            cout<<"Account No :"<<acc_no<<endl;
            cout<<"Name    :"<<name<<endl;
            cout<<"Balance    :"<<balance<<endl;
        }
};

int main(){
    Bank obj;
    obj.createAcc();
    obj.deposit(2000);
    obj.withdrawal(1000);
    obj.balanceEnq();
    obj.Print();
}
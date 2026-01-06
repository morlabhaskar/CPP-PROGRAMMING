#include<iostream>
using namespace std;
class Payment{
    protected:
        float amount;
        string paymentDate;
    public:
        virtual void processPayment(){
            cout<<"Enter the Amount : "<<endl;
            cin>>amount;
            cout<<"Enter the Payment Date-DD/MM/YYYY : "<<endl;
            cin>>paymentDate;
        }
        virtual void display(){
            cout<<"Amount : "<<amount<<endl;
            cout<<"Payment Date : "<<paymentDate<<endl;
        }
};
class CreditCard : public Payment{
    string cardNo;
    string cardHolderName;
    int cvv;
    float total;
    float fee;
    public:
        void processPayment(){
            total= amount+amount*0.02;
        }
        void display(){
            cout<<"CardNo : "<<cardNo<<endl;
            cout<<"Card Holder Name : "<<cardHolderName<<endl;
            cout<<"Card cvv : "<<cvv<<endl;
        }
};
class Paypall : public Payment{
    string email;
    string paypallAcc;
    bool isVerified;
    public:
        void processPayment(){
            
        }
};
int main(){}
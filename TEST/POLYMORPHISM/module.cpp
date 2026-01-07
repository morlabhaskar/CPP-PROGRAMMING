#include<iostream>
using namespace std;
class Transport{
    protected:
        string transportName;
        string transportId;
    public:
        Transport(){
            cout<<"Enter the Transport Name :"<<endl;
            cin.ignore();
            getline(cin,transportName);
            cout<<"Enter the Transport Id :"<<endl;
            getline(cin,transportId);
        }
        virtual double calculateFare()=0;
        virtual void display(){
            cout<<"Transport Name : "<<transportName<<endl;
            cout<<"Transport Id   : "<<transportId<<endl;
        }
        virtual ~Transport(){}
};
class Bus : public Transport{
    double baseFare;
    public:
        Bus(){
            cout<<"Enter the Bus Base Fare :"<<endl;
            cin>>baseFare;
        }
        double calculateFare(){
            return baseFare;
        }
        void display(){
            Transport::display();
            cout<<"Bus Base Fare : "<<baseFare<<endl;
        }
};
class Taxi : public Transport{
    double baseFare,distanceCharge;
    public:
        Taxi(){
            cout<<"Enter the Taxi Base Fare :"<<endl;
            cin>>baseFare;
            cout<<"Enter the Taxi Distance Charge :"<<endl;
            cin>>distanceCharge;
        }
        double calculateFare(){
            return baseFare+distanceCharge;
        }
        void display(){
            Transport::display();
            cout<<"Taxi Base Fare       : "<<baseFare<<endl;
            cout<<"Taxi Distance Charge : "<<distanceCharge<<endl;
        }
};
class Train : public Transport{
    double baseFare,distanceCharge,serviceCharge;
    public:
        Train(){
            cout<<"Enter the Train Base Fare :"<<endl;
            cin>>baseFare;
            cout<<"Enter the Train Distance Charge :"<<endl;
            cin>>distanceCharge;
            cout<<"Enter the Train Service Charge :"<<endl;
            cin>>serviceCharge;
        }
        double calculateFare(){
            return baseFare+distanceCharge+serviceCharge;
        }
        void display(){
            Transport::display();
            cout<<"Train Base Fare       : "<<baseFare<<endl;
            cout<<"Train Distance Charge : "<<distanceCharge<<endl;
            cout<<"Train Service Charge  : "<<serviceCharge<<endl;
        }
};
int main(){
    Transport *p;
    int ch;
    double charge;
    cout<<"1:Bus\n2:Taxi\n3:Train\nEnter the Choice"<<endl;
    cin>>ch;
    if(ch==1)
        p=new Bus();
    else if(ch==2)
        p=new Taxi();
    else if(ch==3)
        p=new Train();
    else
        cout<<"Invalid Input"<<endl;
    if(!p){
        cout<<"Memory Allocation is Failed"<<endl;
        exit(0);
    }
    if(ch<3 && ch>0){
        cout<<"************** Transport Details *****************"<<endl;
        charge = p->calculateFare();
        p->display();
        cout<<"Total    : "<<charge<<endl;
        cout<<"**************************************************"<<endl;
        delete p;
    }
}
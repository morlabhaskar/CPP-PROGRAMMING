#include<iostream>
using namespace std;

class Sender;
class Package{
    int packageID;
    float ratePerKgPerKm;
    public :
        Package(){
            packageID=ratePerKgPerKm=0;
        }
        void inputPackageDetails(){
            cout<<"Enter the PackageID :"<<endl;
            cin>>packageID;
            cout<<"Enter the Rate Per Kg Per Km :"<<endl;
            cin>>ratePerKgPerKm;
        }
        void displayPackageDetails(){
            cout<<"PackageID      : "<<packageID<<endl;
            cout<<"RatePerKgPerKm : "<<ratePerKgPerKm<<endl;
        }
        friend void calculateDeliveryCharges(Package p,Sender &s);
};

class Sender{
    int senderID;
    string senderName;
    string senderAddr;
    float weight;
    float distance;
    float totalCharge;
    public :
        Sender(){
            senderID=weight=distance=totalCharge=0;
        }
        void inputSenderDetails(){
            cout<<"Enter the SenderID : "<<endl;
            cin>>senderID;
            cout<<"Enter the SenderName : "<<endl;
            cin>>senderName;
            cout<<"Enter the Sender Address : "<<endl;
            cin>>senderAddr;
            cout<<"Enter the Weight : "<<endl;
            cin>>weight;
            cout<<"Enter the Distance : "<<endl;
            cin>>distance;
        }
        void displaySenderDetails(){
            cout<<"SenderID       : "<<senderID<<endl;
            cout<<"SenderName     : "<<senderName<<endl;
            cout<<"Sender Address : "<<senderAddr<<endl;
            cout<<"Weight         : "<<weight<<endl;
            cout<<"Distance       : "<<distance<<endl;
        }
        void displayTotalCharge(){
            cout<<"Total Charge   : "<<totalCharge<<endl;
        }
        friend void calculateDeliveryCharges(Package p,Sender &s);
};

void calculateDeliveryCharges(Package p,Sender &s){
    s.totalCharge = s.weight * s.distance * p.ratePerKgPerKm;
}


int main(){
    Package p;
    Sender s;
    p.inputPackageDetails();
    s.inputSenderDetails();

    p.displayPackageDetails();
    s.displaySenderDetails();

    calculateDeliveryCharges(p,s);

    s.displayTotalCharge();
}
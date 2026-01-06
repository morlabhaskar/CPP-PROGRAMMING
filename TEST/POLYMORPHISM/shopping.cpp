#include<iostream>
using namespace std;
class Payment{
    protected:
        float amount;
        string paymentDate;
        float total;
        float fee;
    public:
        Payment(){
            cout<<"Payment Constructor"<<endl;
        }
        virtual void processPayment()=0;
        virtual void display()=0;
        virtual ~Payment(){}
};
class CreditCard : public Payment{
        string cardNo;
        string cardHolderName;
        int cvv;
    public:
        CreditCard(){
            cout<<"Credit Card Constructor"<<endl;
        }
        void processPayment(){
            cout << "Enter Amount: ";
            cin >> amount;
            cout << "Enter Payment Date (DD/MM/YYYY): ";
            cin.ignore();
            getline(cin,paymentDate);
            cout << "Enter Card Number: ";
            cin >> cardNo;
            cout << "Enter Card Holder Name: ";
            cin.ignore();
            getline(cin,cardHolderName);
            cout << "Enter CVV: ";
            cin >> cvv;
            fee=amount*0.02;
            total= amount+fee;
        }
        void display(){
            cout << "\n--- Credit Card Payment ---\n";
            cout << "Card Number: ******" <<cardNo.substr(cardNo.length()-4)<<endl;
            cout << "Card Holder: " <<cardHolderName<<endl;
            cout << "Fee (2%): " <<fee<<endl;
            cout << "Total Amount: " <<total<<endl;
        }
};
class Paypall : public Payment{
    string email;
    bool isVerified;
    public:
        Paypall(){
            cout<<"Paypall Constructor"<<endl;
        }
        void processPayment(){
            cout << "Enter Amount: ";
            cin >> amount;
            cout << "Enter Payment Date (DD/MM/YYYY): ";
            cin.ignore();
            getline(cin,paymentDate);
            cout << "Enter PayPal Email: ";
            cin.ignore();
            getline(cin,email);
            cout << "Is Account Verified (1-Yes / 0-No): ";
            cin >> isVerified;
            total = amount + 5;   // flat ₹5 fee
        }
        void display(){
            cout << "\n--- PayPal Payment ---\n";
            cout << "Email: " << email << endl;
            cout << "Verified: " << (isVerified ? "Yes" : "No") << endl;
            cout << "Total Amount: " << total << endl;
        }
};
class CashOnDelivery : public Payment{
    string deliveryAddress;
    public:
        CashOnDelivery(){
            cout<<"CashOnDelivery Constructor"<<endl;
        }
        void processPayment(){
            cout << "Enter Amount: ";
            cin >> amount;
            cout << "Enter Payment Date (DD/MM/YYYY): ";
            cin >> paymentDate;
            cout << "Enter Delivery Address: ";
            cin.ignore();              // clear buffer
            getline(cin, deliveryAddress);
            total = amount;            // No fee
        }
        void display(){
            cout << "\n--- Cash On Delivery ---\n";
            cout << "Delivery Address: " << deliveryAddress << endl;
            cout << "Total Amount: " << total << endl;
        }
};
int main(){
    Payment *p;
    int ch;
    cout << "1. Credit Card Payment\n2. PayPal Payment\n3.Cash On Delivery"<<endl;
    cout << "Enter choice: ";
    cin >> ch;
    if(ch==1){
        p=new CreditCard();
    }else if(ch==2){
        p=new Paypall();
    }else{
        p=new CashOnDelivery();
    }
    p->processPayment();
    p->display();
    delete p;
}
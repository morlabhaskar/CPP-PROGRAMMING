#include<iostream>
using namespace std;
class Loan{
    protected:
        float principalAmount;
        int loanTerm;
        string borrowName;
        string loanStartDate;
        float interest;
        float total;
    public:
        Loan(){
            interest=0;
            total=0;
            cout<<"Enter the Principal Amount : "<<endl;
            cin>>principalAmount;
            cout<<"Enter the Loan Term (years) : "<<endl;
            cin>>loanTerm;
            cout<<"Enter the Borrow Name : "<<endl;
            cin>>borrowName;
            cout<<"Enter the Loan Start Date (DD/MM/YYYY): "<<endl;
            cin>>loanStartDate;
        }
        virtual void calculateTotalPayment()=0;
        virtual void display(){
            cout << "\n----- Loan Details -----\n";
            cout << "Principal Amount : " << principalAmount << endl;
            cout << "Loan Term        : " << loanTerm << " years" << endl;
            cout << "Borrower Name    : " << borrowName << endl;
            cout << "Loan Start Date  : " << loanStartDate << endl;
            cout << "Interest         : " << interest << endl;
            cout << "Total Payable    : " << total << endl;
        }
        virtual ~Loan(){
            cout<<"Loan Destructor"<<endl;
        };
};
class HomeLoan : public Loan{
    string propertyAddr;
    float interestRate;
    bool insuranceIncluded;
    public:
        HomeLoan(){
            cout<<"Enter the Property Address : "<<endl;
            cin>>propertyAddr;
            cout<<"Enter the Interest Rate (%) : "<<endl;
            cin>>interestRate;
            cout<<"Insurance Included (1-Yes, 0-No): "<<endl;
            cin>>insuranceIncluded;
        }
        void calculateTotalPayment(){
            interest=principalAmount*interestRate*loanTerm;
            total=principalAmount+interest;
            if(insuranceIncluded)
                total += 500;
        }
        void display(){
            Loan::display();
            cout << "Property Address : " << propertyAddr << endl;
            cout << "Interest Rate    : " << interestRate << "%" << endl;
            cout << "Insurance Added  : " << (insuranceIncluded ? "Yes" : "No") << endl;
        }
        ~HomeLoan(){
            cout<<"Home Loan Destructor"<<endl;
        }
};
class CarLoan : public Loan{
    string carModel;
    string dealerName;
    float interestRate;
    public:
        CarLoan(){
            cout<<"Enter the Car Model : "<<endl;
            cin>>carModel;
            cout<<"Enter the Dealer Name : "<<endl;
            cin>>dealerName;
            cout<<"Enter the Interest Rate (%) : "<<endl;
            cin>>interestRate;
        }
        void calculateTotalPayment(){
            interest=principalAmount*interestRate*loanTerm;
            total=principalAmount+interest;
        }
        void display(){
            Loan::display();
            cout << "Car Model    : " << carModel << endl;
            cout << "Dealer Name  : " << dealerName << endl;
            cout << "Interest Rate: " << interestRate << "%" << endl;
        }
        ~CarLoan(){
            cout<<"Car Loan Destructor"<<endl;
        }
};
class PersonalLoan : public Loan{
    string purpose;
    float interestRate;
    float processFee;
    public:
        PersonalLoan(){
            cout<<"Enter Purpose (Medical/Travel/etc): "<<endl;
            cin>>purpose;
            cout<<"Enter the Interest Rate (%) : "<<endl;
            cin>>interestRate;
            cout<<"Enter the Process Fee : "<<endl;
            cin>>processFee;
        }
        void calculateTotalPayment(){
            interest=principalAmount*interestRate*loanTerm;
            total=principalAmount+interest+processFee;
        }
        void display(){
            Loan::display();
            cout << "Purpose         : " << purpose << endl;
            cout << "Interest Rate   : " << interestRate << "%" << endl;
            cout << "Processing Fee  : " << processFee << endl;
        }
        ~PersonalLoan(){
            cout<<"Personal Loan Destructor"<<endl;
        }
};
int main(){
    Loan *p;
    int ch;
    cout << "1.Home Loan\n2.Car Loan\n3.Personal Loan"<<endl;
    cout << "Enter choice: ";
    cin >> ch;
    if(ch==1){
        p=new HomeLoan();
    }else if(ch==2){
        p=new CarLoan();
    }else{
        p=new PersonalLoan();
    }
    p->calculateTotalPayment();
    p->display();
    delete p;
}


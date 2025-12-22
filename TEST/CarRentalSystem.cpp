#include<iostream>
using namespace std;
class Customer;
class Car{
    int carID;
    string carName;
    float rentPerDay;
    public :
        Car(){
            carID=rentPerDay=0;
        }
        void inputCarDetails(){
            cout<<"Enter the carID : "<<endl;
            cin>>carID;
            cout<<"Enter the carName : "<<endl;
            cin>>carName;
            cout<<"Enter the RentPerDay : "<<endl;
            cin>>rentPerDay;
        }
        void displayCarDetails(){
            cout<<"Car ID         : "<<carID<<endl;
            cout<<"Car Name       : "<<carName<<endl;
            cout<<"Car RentPerDay : "<<rentPerDay<<endl;
        }
        friend void calculateRentalAmmout(Customer &cust,Car car);
};
class Customer{
    int customerID;
    string customerName;
    string phnNo;
    int rentalDays;
    float totalAmount;
    public :
        Customer(){
            customerID=rentalDays=totalAmount=0;
        }
        void inputCustomerDetails(){
            cout<<"Enter the CustomerID : "<<endl;
            cin>>customerID;
            cout<<"Enter the CustomerName : "<<endl;
            cin>>customerName;
            cout<<"Enter the Customer Phone Number : "<<endl;
            cin>>phnNo;
            cout<<"Enter the Rental Days : "<<endl;
            cin>>rentalDays;
        }
        void displayCustomerDetails(){
            cout<<"CustomerID     : "<<customerID<<endl;
            cout<<"CustomerName   : "<<customerName<<endl;
            cout<<"CustomerPhone  : "<<phnNo<<endl;
            cout<<"Rental Days    : "<<rentalDays<<endl;
        }
        void displayTotalAmount(){
            cout<<"Total Amount   : "<<totalAmount<<endl;
        }
        friend void calculateRentalAmmout(Customer &cust,Car car);
};

void calculateRentalAmmout(Customer &cust,Car car){
    cust.totalAmount = cust.rentalDays * car.rentPerDay;
}

int main(){
    Car c;
    Customer cust;

    c.inputCarDetails();
    cust.inputCustomerDetails();

    c.displayCarDetails();
    cust.displayCustomerDetails();

    calculateRentalAmmout(cust,c);
    cust.displayTotalAmount();
}
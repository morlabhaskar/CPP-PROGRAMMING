#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class Product{
    protected:
        int productId;
        char productName[20];
        float price;
    public:
        Product(){}
        void productInput(){
            // productId = (rand()%(9999-1111+1))+1111;
            cout<<"Enter the Product Id :"<<endl;
            cin>>productId;
            cout<<"Enter the Product Name :"<<endl;
            cin>>productName;
            cout<<"Enter the Product Price :"<<endl;
            cin>>price;
        }
        void productPrint(){
            cout<<"Product Id : "<<productId<<endl;
            cout<<"Product Name : "<<productName<<endl;
            cout<<"Product Price : "<<price<<endl;
        }
};
class Customer{
    protected:
        int custId;
        char custName[20];
        char custAddr[30];
    public:
        Customer(){}
        void custInput(){
            // custId = (rand()%(9999-1111+1))+1111;
            cout<<"Enter the Customer Id :"<<endl;
            cin>>custId;
            cout<<"Enter the Customer Name :"<<endl;
            cin>>custName;
            cout<<"Enter the Customer Address :"<<endl;
            cin>>custAddr;
        }
        void custPrint(){
            cout<<"custId : "<<custId<<endl;
            cout<<"custName : "<<custName<<endl;
            cout<<"custAddr : "<<custAddr<<endl;
        }
};
class Order : public Product,public Customer{
    int qty;
    int total;
    public :
        void orderInput(){
            cout<<"Enter the Quantity :"<<endl;
            cin>>qty;
        }
        void calTotal(){
            total=price*qty;
        }
        void orderPrint(){
            cout<<"Product Name : "<<productName<<endl;
            cout<<"Product Id : "<<productId<<endl;
            cout<<"Product Price : "<<price<<endl;
            cout<<"Customer Name : "<<custName<<endl;
            cout<<"Customer Id : "<<custId<<endl;
            cout<<"Product Address : "<<custAddr<<endl;
            cout<<"Order Price : "<<total<<endl;
        }
};
int main(){
    // srand(time(0));
    Order obj;
    obj.productInput();
    obj.custInput();
    obj.orderInput();
    obj.calTotal();
    cout<<"Product Details :"<<endl;
    obj.productPrint();
    cout<<"Customer Details : "<<endl;
    obj.custPrint();
    cout<<"Bill : "<<endl;
    obj.orderPrint();
}




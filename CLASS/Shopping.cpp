#include<iostream>
#include<cstring>
using namespace std;
typedef struct product{
    char name[20];
    float price;
    float Qty;
}PRODUCT;

class Shopping{
    PRODUCT cart[50];
    int amount;
    int items;
    public:
        Shopping(){
            items=0;
            amount=0;
        }
        void AddToCart(PRODUCT p){
            cart[items] = p;
            items++;
            amount += p.price*p.Qty;
            cout<<p.name<<" add to cart"<<endl;
        }
        void ViewCart(){
            if(items==0){
                cout<<"Cart is Empty!"<<endl;
                return;
            }
            cout<<"Items in Cart : "<<endl;
            for(int i=0;i<items;i++){
                cout<<i+1<<" . Name : "<<cart[i].name<<" | Qty : "<<cart[i].Qty<<" | Price : $"<<cart[i].price*cart[i].Qty<<endl;
                cout<<endl;
            }
            cout<<"-------------------------------------------"<<endl;
            cout<<"Toatal Amount : $"<<amount<<endl;
            
        }
        void CalTotalAmount(){
            amount=0;
            for(int i=0;i<items;i++){
                amount += cart[i].price*cart[i].Qty;
            }
            cout<<"Total Amount : $"<<amount<<endl;
        }
        void DeleteItem(int index){
            if(index<1 || index>items){
                cout<<"Invalid Index "<<endl;
                return;
            }
            amount -= cart[index].price;
            for(int i=index-1;i<items-1;i++){
                cart[i]=cart[i+1];
            }
            items--;
            cout<<"Item Deleted From Cart"<<endl;
        }
};

int main(){
    Shopping shop;
    PRODUCT p1={"Soap",50,75};
    PRODUCT p2={"apple",30,20};
    shop.AddToCart(p1);
    shop.AddToCart(p2);
    shop.ViewCart();
    shop.CalTotalAmount();
    shop.DeleteItem(1);
    shop.ViewCart();
}
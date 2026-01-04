#include<iostream>
using namespace std;
class Shape{
    public:
        // void area(){
        virtual void area(){
            cout<<"This is Shape area"<<endl;
        }
};
class Circle : public Shape{
    public:
        void area(){
            cout<<"This is Circle area"<<endl;
        }
};
class Rectangle : public Shape{
    public:
        void area(){
            cout<<"This is Rectangle area"<<endl;
        }
};
int main(){
    Shape *bptr;
    Circle c;
    Rectangle r;
    bptr=&c;
    bptr->area();
    bptr=&r;
    bptr->area();
}

#include<iostream>
using namespace std;
class Polygon{
    protected:
        int width,height;
    public:
        void setVal(int a=0,int b=0){
            width=a;
            height=b;
        }
        virtual int area(){
            return 0;
        }
};
class Reactangle : public Polygon{
    public:
        int area(){
            return width*height;
        }
};
class Triangle : public Polygon{
    public:
        int area(){
            return (width*height)/2;
        }
};
int main(){
    Reactangle r;
    Triangle t;
    Polygon p;

    Polygon *pptr1=&p;
    Polygon *pptr2=&r;
    Polygon *pptr3=&t;

    pptr1->setVal(3,9);
    pptr2->setVal(10,15);
    pptr3->setVal(5,10);

    cout<<pptr1->area()<<endl;
    cout<<pptr2->area()<<endl;
    cout<<pptr3->area()<<endl;
    cout<<"New :"<<endl;
    cout<<p.area()<<endl;
    cout<<r.area()<<endl;
    cout<<t.area()<<endl;
}
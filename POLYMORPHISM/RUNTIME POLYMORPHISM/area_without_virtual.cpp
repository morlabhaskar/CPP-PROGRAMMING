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
    Polygon *pptr1,*pptr2;
    Reactangle r;
    Triangle t;
    pptr1=&r;
    pptr2=&t;
    pptr1->setVal(10,20);
    pptr2->setVal(5,10);
    cout<<r.area()<<endl;
    cout<<t.area()<<endl;
}
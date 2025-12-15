#include<iostream>
using namespace std;
class Circle; // forward declaration
class Square{
    float side,area,peri;
    public:
        Square(){
            cout<<"Enter the Side :"<<endl;
            cin>>side;
        }
        void CalArea(){
            area = side * side;
        }
        void CalPeri(){
            peri = 4 * side;
        }
        friend void Print(Square,Circle);
};
class Circle{
    float rad,area,peri;
    public:
        Circle(){
            cout<<"Enter the Radius :"<<endl;
            cin>>rad;
        }
        void CalArea(){
            area = 3.14 * rad * rad;
        }
        void CalPeri(){
            peri = 2 * 3.14 * rad;
        }
        friend void Print(Square,Circle);
};
void Print(Square s,Circle c){
    cout<<"Square Details : "<<endl;
    cout<<"Side : "<<s.side<<endl;
    cout<<"Area : "<<s.area<<endl;
	cout<<"Peri : "<<s.peri<<endl;

    cout<<"Circle Details : "<<endl;
	cout<<"Radius : "<<c.rad<<endl;
	cout<<"Area : "<<c.area<<endl;
	cout<<"Peri : "<<c.peri<<endl;
}
int main(){
    Square sobj;
    sobj.CalArea();
    sobj.CalPeri();

    Circle cobj;
    cobj.CalArea();
    cobj.CalPeri();

    Print(sobj,cobj);
}
#include<iostream>
using namespace std;
class Circle{
    float area;
    float radius;
    float perimeter;
    public:
        void SetValues(float rad){
            radius=rad;
            cout<<"Radius : "<<radius<<endl;
        }
        void CalArea(){
            area = 3.14*(radius*radius);
            cout<<"Area : "<<area<<endl;
        }
        void CalPeri(){
            perimeter = 2 * 3.14 *radius;
            cout<<"Perimeter : "<<perimeter<<endl;
        }
        float getDiameter(){
            return 2*radius;
        }
};
int main(){
    Circle obj;
    obj.SetValues(10);
    obj.CalArea();
    obj.CalPeri();
    float dia=obj.getDiameter();
    cout<<"Diameter : "<<dia<<endl; 
}
#include<iostream>
using namespace std;
class Circle{
    float area;
    float radius;
    float perimeter;
    public:
        void setValues(float rad){
            radius=rad;
        }
        void calArea(){
            area = 3.14*(radius*radius);
        }
};
int main(){

}
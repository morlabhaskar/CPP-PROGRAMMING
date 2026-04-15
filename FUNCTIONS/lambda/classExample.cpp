#include<iostream>
class Calculator{
    public :
        void multiply(int x,int y){
            auto mul = [](int a,int b){
                return a*b;
            };
            std::cout<<"multiply = "<<mul(x,y)<<std::endl;
        }
};
int main(){
    Calculator cal;
    cal.multiply(10,20);
}
/
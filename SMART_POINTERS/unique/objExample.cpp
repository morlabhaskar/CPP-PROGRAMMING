#include<iostream>
#include<memory>
class Vehicle{
    public :
        virtual void drive()=0;
        virtual ~Vehicle(){};
};
class Car : public Vehicle{
    public :
        void drive(){
            std::cout<<"Driving Car"<<std::endl;
        }
};
class Bike : public Vehicle{
    public :
        void drive(){
            std::cout<<"Driving Bike"<<std::endl;
        }
};
std::unique_ptr<Vehicle> createVehicle(std::string type){
    if(type == "car"){
        return std::make_unique<Car>();
    }
    else if(type == "bike"){
        return std::make_unique<Bike>();
    }
    else{
        return nullptr;
    }
}
int main(){
    auto v = createVehicle("car");//or
    // std::unique_ptr<Vehicle> v = createVehicle("bike");//you can use this also
    if(v){
        v->drive();
    }
    else{
        std::cout<<"Invalid choice"<<std::endl;
    }
}
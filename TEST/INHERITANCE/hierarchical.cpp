#include<iostream>
using namespace std;
class Vehicle{
    protected:
        string brand;
        string model;
        double price;
        double fuelConsumed;
        double distanceTravelled;
    public:
        void vehicleInput(){
            cout<<"Enter the Brand :"<<endl;
            cin>>brand;
            cout<<"Enter the Model :"<<endl;
            cin>>model;
            cout<<"Enter the Price :"<<endl;
            cin>>price;
            cout<<"Enter the Fuel Consumed :"<<endl;
            cin>>fuelConsumed;
            cout<<"Enter the Distance Travelled :"<<endl;
            cin>>distanceTravelled;
        }
        void vehiclePrint(){
            cout<<"Enter the Car Brand : "<<brand<<endl;
            cout<<"Enter the Car Model : "<<model<<endl;
            cout<<"Enter the Car Price : "<<price<<endl;
            cout<<"Enter the Car Fuel Consumed : "<<fuelConsumed<<endl;
            cout<<"Enter the Car Distance Travelled : "<<distanceTravelled<<endl;
        }
        float calculateMilage(){
            return fuelConsumed/distanceTravelled;
        }
};
class Car : public Vehicle{
        int seatingCapacity;
        bool isAuto;
    public:
        void carInput(){
            cout<<"Enter the Car Seating Capacity :"<<endl;
            cin>>seatingCapacity;
            cout<<"Is Car is Automatic Enter 1 if yes otherwise 0 :"<<endl;
            cin>>isAuto;
        }
        void carPrint(){
            cout<<"Car Seating Capacity : "<<seatingCapacity<<endl;
            cout<<"Is Car is Automatic  : "<<(isAuto?"YES":"NO")<<endl;
        }
};
class Bike : public Vehicle{
        int engineCapacity;
        bool hasABS;
    public:
        void bikeInput(){
            cout<<"Enter the Bike Engine Capacity :"<<endl;
            cin>>engineCapacity;
            cout<<"Is Bike is has ABS Enter 1 if yes otherwise 0 :"<<endl;
            cin>>hasABS;
        }
        void bikePrint(){
            cout<<"Bike Engine Capacity : "<<engineCapacity<<endl;
            cout<<"Is Bike has ABS : "<<(hasABS?"YES":"NO")<<endl;
        }
};
int main(){
    Car cobj;
    Bike bobj;
    cout<<"Car : "<<endl;
    cobj.vehicleInput();
    cobj.carInput();
    cout<<"Bike "<<endl;
    bobj.vehicleInput();
    bobj.bikeInput();

    cout<<"Car : "<<endl;
    cobj.vehiclePrint();
    cobj.carPrint();
    cout<<cobj.calculateMilage()<<endl;
    cout<<"Bike "<<endl;
    bobj.vehiclePrint();
    bobj.bikePrint();
    cout<<bobj.calculateMilage()<<endl;
}




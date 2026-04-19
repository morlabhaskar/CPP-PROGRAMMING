#include<iostream>
class Sensor{
    int value;
    public :
        Sensor(int v) : value(v){}
        int getValue() const{
            // Need to modify internal cache (rare case)
            return const_cast<Sensor*>(this)->value;
        }
};
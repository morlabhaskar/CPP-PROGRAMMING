#include<iostream>
#include<memory>
#include<vector>

class Module{
    public :
        Module(){
            std::cout<<"Module Constructor"<<std::endl;
        }
        virtual void update(int temp) = 0;
        virtual ~Module(){
            std::cout<<"Module Destructor"<<std::endl;
        }
};
class Display : public Module{
    public :
        Display(){
            std::cout<<"Display Constructor"<<std::endl;
        }
        void update(int temp){
            std::cout<<"Display : Temperature = "<<temp<<std::endl;
        }
        ~Display(){
            std::cout<<"Display Destructor"<<std::endl;
        }
};
class Logger : public Module{
    public :
        Logger(){
            std::cout<<"Logger Constructor"<<std::endl;
        }
        void update(int temp){
            std::cout<<"Logger : Saving Temperature = "<<temp<<std::endl;
        }
        ~Logger(){
            std::cout<<"Logger Destructor"<<std::endl;
        }
};
class TemperatureSensor{
    std::vector<std::shared_ptr<Module>> modules;
    public :
        TemperatureSensor(){
            std::cout<<"TemperatureSensor Constructor"<<std::endl;
        }
        void addModule(std::shared_ptr<Module> m){
            modules.push_back(m);
        }
        void setTemperature(int temp){
            notify(temp);
        }
        void notify(int temp){
            for(auto & m : modules){
                m->update(temp);
            }
        }
        ~TemperatureSensor(){
            std::cout<<"TemperatureSensor destructor"<<std::endl;
        }
};
int main(){
    auto display = std::make_shared<Display>();
    auto logger = std::make_shared<Logger>();

    TemperatureSensor sensor;

    sensor.addModule(display);
    sensor.addModule(logger);

    sensor.setTemperature(25);
    sensor.setTemperature(30);
}
/*
Module Constructor
Display Constructor
Module Constructor
Logger Constructor
TemperatureSensor Constructor
Display : Temperature = 25
Logger : Saving Temperature = 25
Display : Temperature = 30
Logger : Saving Temperature = 30
TemperatureSensor destructor
Logger destructor
Module Destructor
Display Destructor
Module Destructor
*/
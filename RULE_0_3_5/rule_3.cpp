/*
If your class manually manages a resource and needs one of these three functions, it usually needs all three:
Destructor
Copy constructor
Copy assignment operator

Why are all three important?
Because the class owns data.
If you simply copy the pointer:
Buffer A                  Buffer B
data ──────► [10] ◄────── data

Both objects point to the same memory.
When both destructors run:
delete data;   // A
delete data;   // B → ❌ double delete
So you need deep copying.
*/
#include<iostream>
class Buffer
{
    private:
        int* data;
    public:
        Buffer(int value)
        {
            std::cout<<"Default Constructor"<<std::endl;
            data = new int(value);
        }

        // 1. Destructor
        ~Buffer()
        {
            std::cout<<"Destructor"<<std::endl;
            delete data;
        }

        // 2. Copy constructor
        Buffer(const Buffer& other)
        {
            std::cout<<"Copy Constructor"<<std::endl;
            data = new int(*other.data);
        }

        // 3. Copy assignment
        Buffer& operator=(const Buffer& other)
        {
            std::cout<<"Assignment Constructor"<<std::endl;
            if (this != &other)
            {
                delete data;
                data = new int(*other.data);
            }
            return *this;
        }
        void print()
        {
            std::cout<<"Data :"<<*data<<std::endl;
        }
};

int main()
{
    // Buffer obj(10);
    // obj.print();
    Buffer obj = 10;
    obj.print();
}
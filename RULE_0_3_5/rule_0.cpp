/*
This is the modern C++ preferred approach.

Instead of manually managing resources, use RAII classes such as:
std::unique_ptr
std::shared_ptr
std::vector
std::string
std::array

Then your class doesn't need to explicitly define:
Destructor
Copy constructor
Copy assignment
Move constructor
Move assignment
*/
#include<iostream>
#include<vector>

// class CameraBuffer
// {
//     int* data;

//     public:
//         CameraBuffer()
//         {
//             std::cout<<"Constructor"<<std::endl;
//             data = new int[100];
//         }
//         void Print()
//         {
//             std::cout<<*data<<std::endl;
//         }
//         ~CameraBuffer()
//         {
//             std::cout<<"Destructor"<<std::endl;
//             delete[] data;
//         }
//         // copy/move functions...
// };
// int main()
// {
//     CameraBuffer obj;
//     obj.Print();
// }

//intead of above manually , use predefined is called RULE of 0.
class CameraBuffer
{
    private:
        std::vector<int> data;
    public:
        CameraBuffer()
        : data({100,200})
        {
            std::cout<<"Constructor"<<std::endl;
        }
        void Print()
        {
            for(int i:data){
                std::cout<<i<<std::endl;
            }
        }
};
int main()
{
    CameraBuffer obj;
    obj.Print();
}

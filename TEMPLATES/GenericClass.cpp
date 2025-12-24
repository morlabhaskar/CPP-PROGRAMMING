#include<iostream>
using namespace std;
template <class type>
class Array{
    type arr[5];
    public :
        Array(){
            cout<<"Enter Array Elements :"<<endl;
            for(int i=0;i<5;i++){
                cin>>arr[i];
            }
        }
        void Print(){
            cout<<"Array is :"<<endl;
            for(int i=0;i<5;i++){
                cout<<arr[i]<<" "<<endl;
            }
        }
};

int main(){
    Array<int>a1;
    Array<string>a2;
    a1.Print();
    a2.Print();
}
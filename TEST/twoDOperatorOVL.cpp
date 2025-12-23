#include<iostream>
using namespace std;

class Matrix{
    int arr[3][3];
    public :
        Matrix(){
            cout<<"Matrix Constructor"<<endl;
        }
        void input(){
            cout<<"Enter the Array"<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>arr[i][j];
                }
            }
        }
        void Print(){
            cout<<"Array Elements are :"<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        void operator=(Matrix &e){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    arr[i][j] = e.arr[i][j];
                }
            }
        }
        Matrix& operator++(){
            // static Matrix temp;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    ++arr[i][j];
                }
            }
            return *this;
        }
        Matrix& operator++(int){
            static Matrix temp;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    temp.arr[i][j]=arr[i][j]++;
                }
            }
            return temp;
        }
        ~Matrix(){
            cout<<"Matrix Destructor"<<endl;
        }
};
int main(){
    Matrix m1,m2;
    m1.input();
    cout<<"m1 : "<<endl;
    m1.Print();
    m2 = m1;
    cout<<"m2 : "<<endl;
    m2.Print();
    m2 = ++m1;//pre-Inc  →  m1.operator++
    cout<<"m2 : "<<endl;
    m2.Print();
    m2 = m1++;//post-Inc  →  m1.operator++(int)
    cout<<"m2 post Inc: "<<endl;
    m2.Print();
    cout<<"m1 After post Inc: "<<endl;
    m1.Print();
}

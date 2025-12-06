#include<iostream>
class Matrix{
    int arr[2][2];
    public : 
        void Input();
        void Print();
        Matrix Add(Matrix);
        Matrix & Sub(Matrix &);
};
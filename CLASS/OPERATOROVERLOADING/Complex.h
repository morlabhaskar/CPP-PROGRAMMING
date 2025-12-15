#ifndef __COMPLEX_H__
#define __COMPLEX_H__

class Complex{
    int real,imag;
    public:
        Complex(int=0,int=0);//parameterised cons
        Complex(Complex &);//copy cons
        void Print();
        ~Complex();//destructor
        Complex operator+(Complex);
        Complex & operator+(int);
};

#endif
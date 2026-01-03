class Complex{
    int real,imag;
    public:
        Complex(int,int);
        void Print();
        friend Complex operator+(Complex,Complex);
        friend Complex & operator-(Complex&,Complex&);
        friend Complex & operator+(Complex&,int);
        friend Complex & operator-(Complex&,int);
        friend Complex & operator++(Complex&);
        friend Complex & operator++(Complex&,int);
};
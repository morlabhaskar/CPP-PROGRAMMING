class Complex{
    int real;
    int img;
    public:
        void Input();
        void Print();
        Complex Add(Complex);
        Complex& Sub(Complex &);
        Complex& Mul(Complex &);
};
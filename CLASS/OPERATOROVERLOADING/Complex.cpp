Complex :: Complex(int a,int b){
    cout<<"Parameteraised Constructor :"<<endl;
    real = a;
    imag = b;
}
Complex :: Complex(Complex &e){
    cout<<"Copy Constructor :"<<endl;
    real = e.real;
    imag = e.imag;
}
void Complex :: Print(){
    cout<<real;
    if(imag>=0)
        cout<<"+";
    cout<<imag<<"j"<<endl;
}
Complex Complex :: operator+(Complex e){
    Complex temp;
    temp.real = real + e.real;
    temp.imag = imag + e.imag;
    return temp;
}
Complex & Complex :: operator-(Complex &e){
    static Complex temp;
    temp.real = real-e.real;
    temp.imag = imag-e.imag;
    return temp;
}
Complex & Complex :: operator+(int x){
    static Complex temp;
    temp.real = real+x;
    temp.imag = imag;
    return temp;
}
Complex & Complex :: operator-(int x){
    static Complex temp;
    temp.real = real-x;
    temp.imag = imag;
    return temp;
}
Complex & Complex :: operator++(){
    ++real;
    ++imag;
    return *this;
}
Complex & Complex :: operator++(int){
    static Complex temp;
    temp.real = real++;
    temp.imag = imag++;
    return temp;
}

Complex :: ~Complex(){
    cout<<"Destructor "<<endl;
}
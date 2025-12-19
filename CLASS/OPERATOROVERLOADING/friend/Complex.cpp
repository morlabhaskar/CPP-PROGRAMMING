Complex :: Complex(int a=0,int b=0){
    cout<<"Parameterised Constructor"<<endl;
    real = a;
    imag = b;
}
void Complex :: Print(){
    cout<<"print"<<endl;
    cout<<real;
    if(imag>=0)
        cout<<"+";
    cout<<imag<<"J"<<endl;
}
Complex operator+(Complex a,Complex b){
    cout<<"obj+obj"<<endl;
    Complex temp;
    temp.real = a.real + b.real;
    temp.imag = a.imag + b.imag;
    return temp;
}
Complex & operator-(Complex &a,Complex &b){
    cout<<"obj-obj"<<endl;
    static Complex temp;
    temp.real = a.real - b.real;
    temp.imag = a.imag - b.imag;
    return temp;
}
Complex & operator+(Complex &a,int x){
    cout<<"obj+int"<<endl;
    static Complex temp;
    temp.real = a.real + x;
    temp.imag = a.imag;
    return temp;
}
Complex & operator-(Complex &a,int x){
    cout<<"obj-int"<<endl;
    static Complex temp;
    temp.real = a.real - x;
    temp.imag = a.imag;
    return temp;
}
Complex & operator++(Complex &a){
    cout<<"Pre-Inc"<<endl;
    ++a.real;
    ++a.imag;
    return a;
}
Complex & operator++(Complex &a,int){
    cout<<"Post_Inc"<<endl;
    static Complex temp;
    temp.real = a.real++;
    temp.imag = a.imag++;
    return temp;
}
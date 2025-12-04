void Complex :: Input(){
    cout<<"Enter Real Number :"<<endl;
    cin>>real;
    cout<<"Enter Img Number :"<<endl;
    cin>>img;
}
void Complex :: Print(){
    cout<<real;
    if(img>0) cout<<"+";
    cout<<img<<"j"<<endl;
}
Complex Complex :: Add(Complex a){
    Complex temp;
    temp.real = real + a.real;
    temp.img = img + a.img;
    return temp;
}
Complex & Complex :: Sub(Complex &a){
    static Complex temp;
    temp.real = real - a.real;
    temp.img = img - a.img;
    return temp;
}
Complex & Complex :: Mul(Complex &a){
    static Complex temp;
    temp.real = real * a.real;
    temp.img = img * a.img;
    return temp;
}

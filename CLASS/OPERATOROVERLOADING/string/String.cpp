String :: String(){
    cout<<"Default Constructor"<<endl;
    ptr = NULL;
    size = 0;
}
String :: String(char *p,int s){
    cout<<"Parameteraised Constructor"<<endl;
    size = s;
    ptr = new char[size];
    strcpy(ptr,p);
}
String :: String(String &s){
    cout<<"Copy Constructor"<<endl;
    size = s.size;
    ptr = new char[size];
    strcpy(ptr,s.ptr);
}
bool String :: operator==(String &s){
    if(strcmp(ptr,s.ptr)==0)
        return true;
    return false;
}
String & String :: operator+(String &s){
    static String temp;
    temp.size = size + s.size;
    temp.ptr = new char[temp.size];
    strcpy(temp.ptr,ptr);
    strcat(temp.ptr,s.ptr);
    return temp;
}
void String :: Print(){
    cout<<"String : "<<ptr<<" , Size : "<<size<<endl;
}
String :: ~String(){
    cout<<"Destructor"<<endl;
    delete []ptr;
}
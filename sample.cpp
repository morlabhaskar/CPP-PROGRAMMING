#include<iostream>
using namespace std;
// int main(){
//     int num;
//     cout << "Enter Number :" << endl;
//     cin >> num;
//     cout << "Entered Number is : " << num;
//     return 0;
// }



// int main(){
//     int num=10;
//     int &ref=num;
//     cout<<num<<","<<ref<<",";
//     ref=40;
//     cout<<num<<","<<ref<<endl;
// }// → 10,10,40,40


//In Below code r is reference to whom?
// int main(){   
//     int num=123;
//     int &ref=num;
//     int *p;
//     p=&num;
//     int * &q=p;
//     int z;
//     p=&z;
//     int &r=*q;
// }// → r reference to z


// int main(){   
//     int data=250;
//     int &r=data;
//     int &z=r;
//     cout<<data<<","<<r<<","<<z<<",";
//     z=60;
//     cout<<data<<","<<r<<","<<z<<endl;
// }// → 250,250,250,60,60,60



// int main(){  
//     int a[5]={10,20,30,40,50};
//     for(int i=0;i<5;i++)
//         cout<<a[i]<<",";
//     int &r=a[2];
//     r=120;
//     for(int i=0;i<5;i++)
//         cout<<a[i]<<",";
// } // → 10,20,30,40,50,10,20,120,40,50



// void Inc(int x, int &y){
//     x++;
//     y++;
// }
// int main(){    
//     int a=10,b=20;
//     cout<<a<<","<<b<<",";
//     Inc(b,a);
//     cout<<a<<","<<b<<endl;
// }// → 10,20,11,20


// void Print(int &x){ 
//     cout<<x<<endl;
// }
// int main(){   
//     Print(10);
// }// → lvalue error becouse actual arg is constant


// void Print(const int &x){ 
//     cout<<x<<endl;
// }
// int main(){          
//     Print(20);
// }// → 20


// int &Add(int &a,int &b){  
//     int c=a+b;
//     return c;
// }
// int main(){  
//     int n1=10,n2=20,n3;
//     n3=Add(n1,n2);
//     cout<<n3<<endl;
// }// → segmentation fault



// int & Add(int &a,int &b){ 
//     static int c=a+b;
//     return c;
// }
// int main(){ 
//     int n1=10,n2=20,n3;
//     n3=Add(n1,n2);
//     cout<<n3<<endl;
// }// → 30


// int & Add(int &a,int &b){ 
//     static int c=a+b;
//     return c;
// }
// int main(){ 
//     int n1=10,n2=20,n3,n4,a=100;
//     n3=Add(n1,n2);
//     n4=Add(n1,a);
//     cout<<n3<<",";
//     cout<<n4<<endl;
// }// → 30,30  Initialization happens only once, not every function call.


// void increment(int &ref) {
//     ref++;
// }
// int main() {
//     int x = 5;
//     increment(x);
//     cout << x << endl;
//     return 0;
// }// → 6


// void print(int &ref) {
//     cout << ref << endl;
// }
// int main() {
//     print(5);
//     return 0;
// }// → error


// int main()
// {
// int *arr = new int[4];
// for(int i=0;i<4;i++)
//         cin>>*(arr + i);
// cout << *(arr + 2);
// delete[] arr;
// }


// int & fun( ){
//     static int x=10;
//     return x;
// }
// int main(){
//     fun()=30;
//     cout<<fun()<<endl;
// } // → 30


// int main(){
//     bool flag1=true;
//     cout<<sizeof(flag1)<<endl;
// }// → 1


// int main(){
//     int x=10,y=20;
//     int &ref=x;
//     cout<<ref<<" "<<x<<" ";
//     ref=y;
//     cout<<ref<<" "<<x<<endl;
// } // → 10 10 20 20 


// class ABC{     
//     int data1,data2;
//     public: 
//         void setData(int a=0,int b=0){     
//             data1=a;
//             data2=b;    
//         }
//         void Print(){      
//             cout<<data1<<","<<data2<<",";
//         }
// };
// int main(){      
//     ABC obj1,obj2;
//     obj1.setData(10,20);
//     obj2.setData();
//     obj1.Print();
//     obj2.Print();
// } // → 10,20,0,0



// class ABC{     
//     int data1,data2;
//     void Inc(){
//         ++data1;
//         data2++;
//     }
//     public: 
//         void setData(int a=0,int b=0){     
//             data1=a;
//             data2=b;                 
//             Inc();
//         }
//         void Print(){      
//             cout<<data1<<","<<data2<<",";
//         }
// };
// int main(){      
//     ABC obj1,obj2;
//     obj1.setData(10,20);
//     obj2.setData();
//     obj1.Print();
//     obj2.Print();
// }  // → 11,21,1,1


// class ABC{
//     int data1,data2;
//     const int data3;
//     static int x;
//     public:
//         ABC() :data3(5){
//             data1=20;
//             data2=10;
//             x++;
//         }
// };
// int ABC::x;
// int main(){
//     ABC obj;
//     cout<<sizeof(obj)<<endl;
// }//12


// int & fun(){
//     static int x=10;
//     return x;
// }
// int main(){
//     fun()=30;
//     cout<<fun()<<endl;
// }//30


// int main(){
//     bool flag1=true;
//     cout<<sizeof(flag1)<<endl;
// }//1


// int main(){
//     int x=10,y=20;
//     int &ref=x;
//     cout<<ref<<" "<<x<<" ";
//     ref=y;
//     cout<<ref<<" "<<x<<endl;
// }// 10 10 20 20


// class Test {
//     int x;
//     public:
//         Test(int a) : x(a){}
//         friend void swapValues(Test &t1, Test &t2);
// };
// void swapValues(Test &t1, Test &t2) {
//     int temp = t1.x;
//     t1.x = t2.x;
//     t2.x = temp;
// }
// int main() {
//     Test a(5), b(10);
//     swapValues(a, b);
//     cout << "a=" << a.x << " b=" << b.x;
// }//error


// class B;
// class A{ 
//     private: 
//         int a; 
//     public: 
//         A(){ 
//             a = 0;
//         } 
//         friend class B; // Friend Class 
// }; 
// class B{ 
//     private: 
//         int b; 
//     public:
//         void showA(A& x) {  
//             std::cout << "A::a=" << x.a; 
//         }
// }; 
// int main() { 
//     A a; 
//     B b; 
//     b.showA(a);   
// }//A::a=0


// class Num {
//     int val;
//     public:
//         Num(int v) : val(v) {}      //Num(int v) {val = v;}
//         friend Num operator*(Num n1, Num n2);
//         void print(){ 
//             cout << val; 
//         }
// };
// Num operator*(Num n1, Num n2) {
//     return Num(n1.val * n2.val);
// }
// int main() {
//     Num a(3), b(4);
//     Num c = a * b;
//     c.print();
// }//12


// class Test {
//     int x;
//     public:
//         Test(int a) : x(a) {}   // Test(int a){x=a;}
//         friend void change(Test &t);
// };
// void change(Test &t){ 
//     t.x += 5; 
// }
// int main() {
//     Test obj(10);
//     change(obj);
//     cout << "Value: " << obj.x;
// }//error



// namespace ABC{
//     int data=10;
// }
// namespace XYZ{
//     int data=40;
// }
// int main(){
//     int data=100;
//     cout<<"data:"<<data<<endl;
// }//data:100


// namespace ABC{
//     int x=10;
//     void Display(){
//         cout<<"ABC Display:"<<endl;
//     }
// }
// namespace XYZ{
//     float x=2.5;
//     void Display(){
//         cout<<"XYZ Display:"<<endl;
//     }
// }
// using namespace ABC;
// int main(){
//     cout<<x<<endl;
//     XYZ::Display();
// }//10\n  XYZ Display:



// namespace ABC{
//     int x=10;
//     void Display(){
//         cout<<"ABC Display:"<<endl;
//     }
// }
// namespace XYZ{
//     float x=2.5;
//     void Display(){
//         cout<<"XYZ Display:"<<endl;
//     }
// }
// using namespace ABC;
// int main(){
//     cout<<x<<endl;
//     XYZ::Display();
// }//10\n  XYZ Display:

int main(){int x=10,y=20;int &ref=x;cout<<ref<<" "<<x<<" ";ref=y;cout<<ref<<" "<<x<<endl;}
/*
Inheritance definition

*/








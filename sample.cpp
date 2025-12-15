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
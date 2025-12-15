#include<iostream>
using namespace std;

#include "Complex.h"
#include "Complex.cpp"

int main(){
    Complex e1(10,20),e2(30,40),e3;
    e3 = e1 + e2;  //e3 = e1.operator+(e2);
    cout<<"e1 : "<<endl;
    e1.Print();
    cout<<"e2 : "<<endl;
    e2.Print();
    cout<<"e3 : "<<endl;
    e3.Print();
}


/*
🔹 OUTPUT :
Parameteraised Constructor :
Parameteraised Constructor :
Parameteraised Constructor :
Copy Constructor :
Parameteraised Constructor :
Destructor
Destructor
e1 :
10+20j
e2 :
30+40j
e3 :
40+60j
Destructor
Destructor
Destructor

🔹 FULL OUTPUT MAPPED
Output                          	Reason
Parameteraised Constructor	        e1
Parameteraised Constructor	        e2
Parameteraised Constructor	        e3
Copy Constructor	                argument passed by value
Parameteraised Constructor	        local temp
Destructor	                        parameter copy
Destructor	                        temp
e1 :	                            print
e2 :	                            print
e3 :	                            print
Destructor	                        e3
Destructor	                        e2
Destructor	                        e1
*/
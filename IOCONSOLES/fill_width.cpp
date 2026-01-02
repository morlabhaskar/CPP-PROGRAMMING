#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x=12,y=20;
    cout.fill('*');
    cout.width(5);
    cout<<x<<endl;
    cout.width(10);
    cout<<y;
}
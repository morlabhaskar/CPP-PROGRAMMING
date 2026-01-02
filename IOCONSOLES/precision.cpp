#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float f=12.4567;
    cout<<f<<endl;

    cout<<fixed;
    cout.precision(2);

    // cout<<fixed<<setprecision(2);

    cout<<f;
}
#include<iostream>
using namespace std;
int main(){
    try{
        throw 5;
    }
    catch(double d){
        cout<<"Double"<<endl;
    }
    catch(int i){
        cout<<"Integer"<<endl;
    }
    catch (...){
        cout << "Unknown exception";
    }
}
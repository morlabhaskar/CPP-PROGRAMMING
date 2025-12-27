#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,3> arr={10,20,30};
    for(int x : arr){
        cout<< x << " ";
    }
}



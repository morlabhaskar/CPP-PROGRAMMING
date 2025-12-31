#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> ms;
    ms.insert(100);
    ms.insert(10);
    ms.insert(30);
    ms.insert(100);
    for(int x : ms){
        cout<< x << " ";
    }
}
/*
Allows duplicate values
Stored in sorted order
Useful when frequency matters
*/

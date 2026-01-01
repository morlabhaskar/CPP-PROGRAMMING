#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(100);
    s.insert(20);
    s.insert(30);
    s.insert(20);//duplicate ignored

    for(int x : s){
        cout<< x << " ";
    }
}
/*
Stores unique values only
No duplicates allowed
Elements of a set are read-only (const).
Sorting depends on the value of elements
*/
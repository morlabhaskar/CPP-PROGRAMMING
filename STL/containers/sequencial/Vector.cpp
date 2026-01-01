#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={100,2,3};
    v.push_back(10);
    v.push_back(2000);
    v.push_back(30);

    for(int x : v){
        cout<< x << " ";
    }
}
/*
Size can grow or shrink dynamically
Stored in contiguous memory
Fast random access
automatically not sorting
*/
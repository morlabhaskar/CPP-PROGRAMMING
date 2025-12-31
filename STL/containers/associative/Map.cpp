#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[10] = "Bhaskar";
    m[5] = "Ravi";
    m[10] = "Bhaskar";//not allowed becouse key value is unique
    m[30] = "Bhaskar";
    for(auto p : m){
        cout << p.first << " " << p.second<<endl;
    }
}
/*
Stores elements as (key, value)
Keys are unique
Values can be duplicated
Automatically sorted by key
*/

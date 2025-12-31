#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<int,string> m;
    m.insert({10,"Bhaskar"});
    m.insert({1,"Ravi"});
    m.insert({10,"Bhaskar"});
    m.insert({4,"Bhaskar"});
    for(auto p : m){
        cout << p.first << " " << p.second<<endl;
    }
}
/*
Same as map
Allows multiple values for the same key
No [] operator
*/

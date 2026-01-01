#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s={20,10,50,30,40};
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}
/*
set automatically sorts elements. Iterator 
still works the same way.
Elements of a set are read-only (const).
*/
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={10,20,30,40};
    for(list<int>::iterator it=l.begin();it != l.end();it++){
        cout<<*it<<" ";
    }
    for(auto it=l.begin();it!=l.end();it++){
        *it += 5;
    }
    cout<<endl;
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(list<int>::reverse_iterator ri=l.rbegin();ri!=l.rend();ri++){
        cout<<*ri<<" ";
    }
}
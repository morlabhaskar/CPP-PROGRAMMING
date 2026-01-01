#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[12]="Bhaskar";
    m[13]="Ravi";
    m[14]="Nani";
    m[15]="Ram";
    m[15]="Ram"; //duplicate key ignore
    for(map<int,string>::iterator it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    for(map<int,string>::reverse_iterator ri=m.rbegin();ri!=m.rend();ri++){
        cout<<ri->first<<" "<<ri->second<<endl;
    }
}
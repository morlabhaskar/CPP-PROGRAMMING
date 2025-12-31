#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={10,20,30,40,50};
    cout << "Using iterator to print vector elements:\n";
    for(vector<int>::iterator it=v.begin();it != v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it != v.end();it++){
        *it += 5;
    }
    cout << "After adding 5 to each element:\n";
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
}


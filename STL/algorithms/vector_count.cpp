#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v={20,1,3,4,33,3,3,5,3};
    int cnt = count(v.begin(),v.end(),3);
    cout<<"Count : "<<cnt;
}
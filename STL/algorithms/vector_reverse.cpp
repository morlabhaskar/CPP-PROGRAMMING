#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,2,5,40,3};
    reverse(v.begin(),v.end());
    // for(int x : v){
    //     cout<<x<<" ";
    // }
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
}
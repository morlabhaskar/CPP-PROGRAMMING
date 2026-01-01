#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={20,3,10,6,2};
    cout<<"Before Sorting"<<endl;
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl<<"After Sorting"<<endl;
    sort(v.begin(),v.end());
    // for(int x : v){
    //     cout<<x<<" ";
    // }
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
}
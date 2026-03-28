#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cout<<"Enter the Size of Vector :"<<endl;
    cin>>n;
    cout<<"Enter the Vector Elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i : v){
        cout<<i<<" ";
    }
    // for(int i=0;i<v.size();i++){  //you can use this also for vector iteration purpose
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
}
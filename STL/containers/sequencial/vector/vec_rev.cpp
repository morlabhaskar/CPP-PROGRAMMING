#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cout<<"Enter the Vector Size :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"Array Before Reverse :"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    
}
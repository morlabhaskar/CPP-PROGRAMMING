#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& v){
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
}
void remove_duplicates(vector<int>& v){
    for(int i=0)
}
int main(){
    vector<int> v;
    int n,x;
    cout<<"Enter the Vector Size :"<<endl;
    cin>>n;
    for(int i=0;i<v.size();i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"Before remove Duplicates :"<<endl;
    print(v);
    remove_duplicates(v);
    cout<<"After remove Duplicates :"<<endl;
    print(v);
}
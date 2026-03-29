#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& v){
    int first=0,last=v.size()-1;
    while(first<last){
        if(v[first]!=v[last]){
            v[first] ^= v[last] ^= v[first] ^= v[last];
        }
        first++;
        last--;
    }
}
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
    reverse(v);
    cout<<"Array After Reverse :"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
}

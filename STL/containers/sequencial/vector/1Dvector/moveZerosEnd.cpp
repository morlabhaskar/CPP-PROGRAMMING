#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &v){
    for(int i : v){
        cout<< i <<" ";
    }
    cout<<endl;
}
void move_zeros_end(vector<int>& v){
    int j=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }
}
int main(){
    vector<int> v;
    int n,x;
    cout<<"Enter the Vector Size :"<<endl;
    cin>>n;
    cout<<"Enter the Vector Elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"Before Zeros Move :"<<endl;
    print(v);
    move_zeros_end(v);
    cout<<"After Zeros Move :"<<endl;
    print(v);
}
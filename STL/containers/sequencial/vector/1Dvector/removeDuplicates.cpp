#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& v){
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
}
vector<int> remove_duplicates(const vector<int>& v){
    vector<int> res;
    for(int i=0;i<v.size();i++){
        bool found=false;
        for(int j=0;j<res.size();j++){
            if(v[i]==res[j]){
                found=true;
                break;
            }
        }
        if(!found) res.push_back(v[i]);
    }
    return res;
}
int main(){
    vector<int> v;
    int n,x;
    cout<<"Enter the Vector Size :"<<endl;
    cin>>n;
    cout<<"Enter the Vector Elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"Before remove Duplicates :"<<endl;
    print(v);
    v=remove_duplicates(v);
    cout<<"After remove Duplicates :"<<endl;
    print(v);
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cout<<"Enter the size of Vector :"<<endl;
    cin>>n;
    cout<<"Enter the Vector Elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int max=v[0];
    for(int i : v){
        cout<<i<<" ";
        if(i>max){
            max=i;
        }
    }
    cout<<endl;
    cout<<"Max Value : "<<max<<endl;
}
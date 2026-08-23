#include<iostream>
#include<vector>
using namespace std;
void input(vector<vector<int>> &arr,int n){
    arr.resize(n,vector<int>(n));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cin>>arr[i][j];
        }
    }
}
void print(vector<vector<int>> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    vector<vector<int>> arr;
    cout<<"Enter the array Elements :"<<endl;
    input(arr,2);
    cout<<"Array is :"<<endl;
    print(arr);
}
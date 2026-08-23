#include<iostream>
using namespace std;
void input(int (&arr)[2][2],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}
void print(int (&arr)[2][2],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[2][2];
    cout<<"Enter array elements :"<<endl;
    input(arr,2);
    cout<<"Array is :"<<endl;
    print(arr,2);
}
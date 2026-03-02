#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void input(int *arr,int len){
    for(int i=0;i<len;i++){
        arr[i]=rand()%(50-1+1)+1;
    }
}
void display(int *arr,int len){
    cout<<"Array Before Sorting :"<<endl;
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selection_sort(int *arr,int len){
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]>arr[j]){
                arr[i]^=arr[j]^=arr[i]^=arr[j];
            }
        }
    }
}
int main(){
    srand(time(0));
    int arr[10],size=10;
    input(arr,size);
    display(arr,size);
    selection_sort(arr,size);
    display(arr,size);
}

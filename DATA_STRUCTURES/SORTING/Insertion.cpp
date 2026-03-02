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
void insertion_sort(int *arr,int len){
    for(int i=1;i<len;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    srand(time(0));
    int arr[10],size=10;
    input(arr,size);
    display(arr,size);
    insertion_sort(arr,size);
    display(arr,size);
}

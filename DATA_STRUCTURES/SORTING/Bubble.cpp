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
void bubble_sort(int *arr,int len){
    for(int i=0;i<len-1;i++){
        int swap=0;
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap=1;
                arr[j]^=arr[j+1]^=arr[j]^=arr[j+1];
            }
        }
        if(!swap) break;
    }
}
int main(){
    srand(time(0));
    int arr[10],size=10;
    input(arr,size);
    display(arr,size);
    bubble_sort(arr,size);
    display(arr,size);
}

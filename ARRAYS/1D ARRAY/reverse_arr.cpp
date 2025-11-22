#include<iostream>
using namespace std;
int *Input(int *p,int s){
    p=new int[s];
    // p=(int *)malloc(s*sizeof(int));
    // p=new int*[3];  // |  int*  |  int*  |  int*  |
    //p=malloc(3*sizeof(*int));
    for(int i=0;i<s;i++){
        cout<<"Enter Value "<<i<<endl;
        cin>>p[i];
    }
    return p;
}
void Reverse(int *p,int s){
    // int temp;
    // for(int i=0,j=s-1;i<j;i++,j--){
    //     temp=p[i];
    //     p[i]=p[j];
    //     p[j]=temp;
    // }
    int *left=p,*right=p+(s-1);
    while(left<right){
        int temp=*left;
        *left=*right;
        *right=temp;
        left++;
        right--;
    }
}
void Print(int *p,int s){
    cout<<"Array is : "<<endl;
    for(int i=0;i<s;i++){
        cout<<p[i]<<" ";
    }
}
int main(){
    int *ptr=NULL,size;
    cout<<"Enter size of Array : "<<endl;
    cin>>size;
    ptr=Input(ptr,size);
    Reverse(ptr,size);
    Print(ptr,size);
}
#include<iostream>
using namespace std;

int main(){
	int *ptr;
	ptr=new int[0xffffffff];
	if(ptr==NULL){
		cout<<"memory allocation failed:"<<endl;
	}
	else{
	    for(int i=0;i<1000;i++){
			ptr[i]=i;
		}
	    for(int i=0;i<1000;i++)
		    cout<<ptr[i]<<" ";
	    cout<<endl;
	}
}

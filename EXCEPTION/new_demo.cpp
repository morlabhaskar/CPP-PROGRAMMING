#include<iostream>
using namespace std;
int main(){
	int *ptr;
	ptr=new int[0xffffffff];
	for(int i=0;i<1000;i++){
		ptr[i]=i;
	}
	for(int i=0;i<1000;i++)
		cout<<ptr[i]<<" ";
	cout<<endl;
    delete[] ptr;
}

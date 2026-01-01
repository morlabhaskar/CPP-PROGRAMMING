#include<iostream>
using namespace std;
namespace{
	int data1=10;
	void foo(){
        cout<<"unnamed namespace foo:"<<endl;
	}
}
int main(){
	cout<<data1<<endl;
	foo();
}

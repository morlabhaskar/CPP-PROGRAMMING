#include<iostream>
using namespace std;
void test(int a){
	try{
		cout<<"inner try:"<<endl;
		if(a%2==0)
			throw ++a;
	}
	catch(int x){
		cout<<"inner catch:"<<endl;
		throw;
	}
}
int main(){
	int num;
	cout<<"enter the num:"<<endl;
	cin>>num;
	try{	
        cout<<"outer try:"<<endl;
		test(num);
	}
	catch(int n){
		cout<<"outer catch:"<<n<<endl;
	}
}

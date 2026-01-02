#include<iostream>
using namespace std;
void test(int n){	
    static char str[]="vector";
	string s1="india";
	if(n==1)
		throw 'A';
	else if(n==2)
		throw 123;
	else if(n==3)
		throw 34.5f;
	else if(n==4)
		throw 67.8;
	else if(n==5)
		throw str;
	else if(n==6)
		throw s1;
}
int main(){
	int num;
	cout<<"enter the field:"<<endl;
	cin>>num;
	try{
		test(num);
	}
	catch(char c){
		cout<<"in character catch:"<<endl;
		cout<<c<<endl;
	}
	catch(int c){
		cout<<"in integer catch:"<<endl;
		cout<<c<<endl;
	}
	catch(float c){
		cout<<"in float catch:"<<endl;
		cout<<c<<endl;
	}
	/*catch(double c){
		cout<<"in double catch:"<<endl;
		cout<<c<<endl;
	}*/
	catch(char *c){
		cout<<"in c style string catch:"<<endl;
		cout<<c<<endl;
	}
	catch(string c){
		cout<<"in c++ style catch:"<<endl;
		cout<<c<<endl;
	}
	catch(...){
		cout<<"Exception occuured:"<<endl;
	}
	cout<<"Program completed:"<<endl;
}


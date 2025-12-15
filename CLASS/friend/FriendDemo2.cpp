#include<iostream>
using namespace std;
class XYZ{	
	int data1,data2;
	public : 
        XYZ(){
		    cout<<"enter the data1 and data2:"<<endl;
		    cin>>data1>>data2;
		}
		void Print(){
			cout<<"data1:"<<data1<<endl;
			cout<<"data2:"<<data2<<endl;
		}
		friend void twocompliment(XYZ &);
};

void twocompliment(XYZ &O){
	cout<<-O.data1<<endl; // cout<<~(O.data1)+1<<endl;
	cout<<-O.data2<<endl; // cout<<~(O.data2)+1<<endl;
}
void foo(XYZ &O){
	++O.data1;
}
int main(){
	XYZ obj;
	obj.Print();
	twocompliment(obj);
	foo(obj);
	obj.Print();
}







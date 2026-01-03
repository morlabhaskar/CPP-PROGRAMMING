#include<iostream>
using namespace std;

void Input(int *p,int s){
	int i;
	for(i=0;i<s;i++){
		cout<<"enter the integer elements:"<<endl;
		cin>>p[i];
	}
}
void Print(int *p,int s){
	for(int i=0;i<s;i++){
		cout<<p[i]<<",";
	}
	cout<<endl;
}
void Rev(int *p,int s){	
    int t;
	for(int i=0,j=s-1;i<j;i++,j--){
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}
}
void Input(double *p,int s){
	int i;
	for(i=0;i<s;i++){
		cout<<"enter the double elements:"<<endl;
		cin>>p[i];
	}
}
void Print(double *p,int s){
	for(int i=0;i<s;i++){
		cout<<p[i]<<",";
	}
	cout<<endl;
}
void Rev(double *p,int s){	
    double t;
	for(int i=0,j=s-1;i<j;i++,j--){
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}
}
int main(){
	int a[5];
	double d[5];
	Input(a,5);
	Print(a,5);
	Rev(a,5);
	Print(a,5);
	
	Input(d,5);
	Print(d,5);
	Rev(d,5);
	Print(d,5);
}


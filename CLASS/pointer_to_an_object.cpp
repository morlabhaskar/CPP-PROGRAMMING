#include<iostream>
using namespace std;
#define MAX 5
class Stack{
    int arr[MAX];
    int top;
    public:
        void Input(){
            top=-1;
        }
        void Push(int data){
            if(top == MAX-1)
                cout<<"Stack is Empty!"<<endl;
            else{
                arr[++top] = data;
            }
        }
        int Pop(){
            return arr[top--];
        }
        int Peek(){
            return arr[top];
        }
        void menu(){
            int data;
            char ch;
            while(1){
                cout<<"p:Push   r:Pop   s:Peek   q:quit"<<endl;
                cout<<"Enter Choice :"<<endl;
                cin>>ch;
                switch(ch){
                    case 'p' :
                        cout<<"Enter a Data : "<<endl;
                        cin>>data;
                        Push(data);
                        break;
                    case 'r':
                        if(top == -1){
                            cout<<"Stack is Empty!"<<endl;
                        }
                        else{
                            int dat=Pop();
                            cout<<"Poped Data is : "<<dat<<endl;
                        }
                        break;
                    case 's':
                        if(top == -1){
                            cout<<"Stack is Empty!"<<endl;
                        }
                        else{
                            cout<<"Peek data in stack is : "<<Peek()<<endl;
                        }
                        break;
                    case 'q':
                        return;
                        
                }
            }
        }
};
int main(){
    Stack obj;
    obj.Input();
    obj.menu();
}
template<class any>
class Stack{
    any a[MAX];
    int top;
    public :
        Stack(){
            top=-1;
        }
        void Push(any data){
            if(top==MAX-1){
                cout<<"Stack is Full"<<endl;
            }
            else{
                a[++top] = data;
            }
        }
        any Pop(){
            return a[top--];
        }
        any Peek(){
            return a[top];
        }
        void Menu(){
            any data;
            char ch;
            while(1){
                cout<<"p:push  r:pop   t:peek   e:exit"<<endl;
                cout<<"Enter the choice :"<<endl;
                cin>>ch;
                switch(ch){
                    case 'p':
                        cout<<"Enter the Data :"<<endl;
                        cin>>data;
                        Push(data);
                        break;
                    case 'r':
                        if(top==-1){
                            cout<<"Stack is Empty"<<endl;
                        }
                        else{
                            cout<<"Data Popped is : "<<Pop()<<endl;
                        }
                        break;
                    case 't':
                        if(top==-1){
                            cout<<"Stack is Empty"<<endl;
                        }
                        else{
                            cout<<"Peek Data is : "<<Peek()<<endl;
                        }
                        break;
                    case 'e':
                        return;
                    default :
                        cout<<"Invalid option"<<endl;
                        break;
                }
            }
        }
};











class Student{
    protected : int id;
    char name[20];
    public :
        Student(){
            cout<<"Enter the Student Id :"<<endl;
            cin>>id;
            cout<<"Enter the Student Name :"<<endl;
            cin>>name;
        }
        void SPrint(){
            cout<<"Student Id : "<<id<<endl;
            cout<<"Student Name : "<<name<<endl;
        }
        ~Student(){
            cout<<"Student Destructor "<<endl;
        }
};



/*
A virtual member function is a function that supports runtime polymorphism in C++.
*/
class Mother{
    protected :
        int age;
        char name[20];
    public :
        Mother(){
            cout<<"Mother Constructor :"<<endl;
            cout<<"Enter the Age :"<<endl;
            cin>>age;
            cout<<"Enter the Name :"<<endl;
            cin>>name;
        }
        virtual void Print(){
            cout<<"Age : "<<age<<endl;
            cout<<"Name : "<<name<<endl;
        }
        virtual void Whomi(){
            cout<<"I am a Mother "<<endl;
        }
        virtual void Qual(){
            cout<<"I am a Graduate"<<endl;
        }
        virtual void Profession(){
            cout<<"I am Home Maker"<<endl;
        }
        virtual void Hobby(){
            cout<<"Gardenning"<<endl;
        }
        virtual ~Mother(){
            cout<<"Mother Constructor"<<endl;
        }
};
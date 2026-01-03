class Child1 : public Mother{
    public :
        Child1(){
            cout<<"Child1 Constructor"<<endl;
        }
        void Whomi(){
            cout<<"I am a Child1"<<endl;
        }
        void Qual(){
            cout<<"BTech"<<endl;
        }
        void Profession(){
            cout<<"Embedded Engineer"<<endl;
        }
        void Hobby(){
            cout<<"Painting"<<endl;
        }
        ~Child1(){
            cout<<"Child1 Destructor"<<endl;
        }
};
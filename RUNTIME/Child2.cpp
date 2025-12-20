class Child2 : public Mother{
    public :
        Child1(){
            cout<<"Child2 Constructor"<<endl;
        }
        void Whomi(){
            cout<<"I am a Child2"<<endl;
        }
        void Qual(){
            cout<<"MTech"<<endl;
        }
        void Profession(){
            cout<<"SR Engineer"<<endl;
        }
        void Hobby(){
            cout<<"Cricket"<<endl;
        }
        ~Child2(){
            cout<<"Child2 Destructor"<<endl;
        }
};
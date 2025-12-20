class Child3 : public Mother{
    public :
        Child3(){
            cout<<"Child3 Constructor"<<endl;
        }
        void Whomi(){
            cout<<"I am a Child3"<<endl;
        }
        void Qual(){
            cout<<"Degree"<<endl;
        }
        void Profession(){
            cout<<"Employee"<<endl;
        }
        void Hobby(){
            cout<<"Drawing"<<endl;
        }
        ~Child3(){
            cout<<"Child3 Destructor"<<endl;
        }
};
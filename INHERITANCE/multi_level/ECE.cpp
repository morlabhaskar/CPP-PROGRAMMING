class ECE : public Student{
    protected : 
        float marks[6];
    public : 
        ECE(){
            cout<<"ECE Constructor"<<endl;
            for(int i=0;i<6;i++){
                cout<<"Enter the Marks :"<<endl;
                cin>>marks[i];
            }
        }
        void EPrint(){
            for(int i=0;i<6;i++){
                cout<<marks[i]<<" ";
            }
            cout<<endl;
        }
        ~ECE(){
            cout<<"ECE Destructor"<<endl;
        }
};





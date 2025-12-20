/*
Virtual inheritance prevents multiple copies of a base class and resolves ambiguity in multiple inheritance
*/

class ECE : virtual public Student{
    protected : float marks[6];
    public : 
        ECE(){
            cout<<"ECE Constructor"<<endl;
            for(int i=0;i<6;i++){
                cout<<"Enter the Marks :"<<endl;
                cin>>marks[i];
            }
        }
        EPrint(){
            for(int i=0;i<6;i++){
                cout<<marks[i]<<" ";
            }
            cout<<endl;
        }
        ~ECE(){
            cout<<"ECE Destructor"<<endl;
        }
};

class EEE : virtual public Student{
    protected : float marks1[6];
    public : 
        EEE(){
            cout<<"EEE Constructor"<<endl;
            for(int i=0;i<6;i++){
                cout<<"Enter the Marks :"<<endl;
                cin>>marks1[i];
            }
        }
        EEPrint(){
            for(int i=0;i<6;i++){
                cout<<marks1[i]<<" ";
            }
            cout<<endl;
        }
        ~EEE(){
            cout<<"EEE Destructor"<<endl;
        }
};





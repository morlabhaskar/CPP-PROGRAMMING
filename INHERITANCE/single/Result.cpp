class Result : public ECE,public EEE{
    float totMarks,per;
    public :
        Result(){
            cout<<"Result Constructor"<<endl;
            totMarks=per=0;
        }
        void CalMarks(){
            for(int i=0;i<6;i++){
                totMarks += marks[i];
            }
            for(int i=0;i<6;i++){
                totMarks += marks1[i];
            }
        }
        CalPer(){
            per = totMarks/12;
        }
        void RPrint(){
            cout<<"Total Marks : "<<totMarks<<endl;
            cout<<"Percentage : "<<per<<endl;
        }
        ~Result(){
            cout<<"Result Destructor"<<endl;
        }
};

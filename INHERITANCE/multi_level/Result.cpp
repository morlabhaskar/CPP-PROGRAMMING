class Result : public ECE{
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
        }
        void CalPer(){
            per = totMarks/6;
        }
        void RPrint(){
            cout<<"Total Marks : "<<totMarks<<endl;
            cout<<"Percentage : "<<per<<endl;
        }
        ~Result(){
            cout<<"Result Destructor"<<endl;
        }
};

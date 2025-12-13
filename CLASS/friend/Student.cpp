Student :: Student(){
    cout<<"Student Cons :"<<endl;
    cout<<"Enter the roll :"<<endl;
    cin>>roll;
    cout<<"Enter the name :"<<endl;
    cin>>name;
}
void Student :: Print(){
    cout<<"Roll : "<<roll<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Marks : "<<endl;
    for(int i=0;i<6;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    cout<<"Total Marks : "<<totMarks<<endl;
    cout<<"Percentage : "<<per<<endl;
    cout<<"Grade : "<<grade<<endl;
}
Faculty :: Faculty(){
    cout<<"Enter the empId : "<<endl;
    cin>>empid;
    cout<<"Enter the name : "<<endl;
    cin>>name;
    cout<<"Enter the subject : "<<endl;
    cin>>subject;
    cout<<"Enter the experience : "<<endl;
    cin>>exp;
}
Faculty :: Print(){
    cout<<"EmpId : "<<empid<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Subject : "<<subject<<endl;
    cout<<"Experience : "<<exp<<endl;
}
void Faculty :: UpLoadMarks(Student &s){
    s.totMarks = 0;
    for(int i=0;i<6;i++){
        cout<<"Enter Marks : "<<endl;
        cin>>s.marks[i];
        s.totMarks += s.marks[i];
    }
    s.per = s.totMarks/6;
    if(s.per<40)
		strcpy(s.grade,"C");
	else if(s.per>=40 && S.per<50)
		strcpy(s.grade,"B");
	else if(s.per>=50 && s.per<60)
		strcpy(S.grade,"B+");
	else if(s.per>=60 && s.per<70)
		strcpy(s.grade,"A");
	else 
		strcpy(s.grade,"A+");
}
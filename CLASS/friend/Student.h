class Student{
    int roll;
    char name[20];
    float marks[6];
    float totMarks;
    float per;
    char grade[3];
    public:
        void Print();
        friend void Falcuty :: UpLoadMarks(Student &);
};
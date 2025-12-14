class Student{
    int roll;
    char name[20];
    float marks[6];
    float totMarks;
    float per;
    char grade[3];
    public:
        Student();
        void Print();
        friend void Faculty :: UpLoadMarks(Student &);
};
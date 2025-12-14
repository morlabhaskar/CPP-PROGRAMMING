class Faculty{
    int empid;
    char name[20];
    char subject[20];
    float exp;
    public:
        Faculty();
        void Print();
        void UpLoadMarks(Student &);
};
class String{
    char *ptr;
    int size;
    public:
        String();
        String(char*,int);
        String(String &);
        bool operator==(String &);
        String & operator+(String &);
        void Print();
        ~String();
};
#include<iostream>
#include<queue>
class Student{
    int roll;
    std::string name;
    public :
        Student(int r,std::string n){
            roll = r;
            name = n;
        }
        void disply(){
            std::cout<<"Id : "<<roll<<" , Name : "<<name<<std::endl;
        }
};
int main(){
    std::queue<Student> q;
    q.push(Student(1,"Bhaskar"));
    q.push(Student(2,"Ravi"));
    q.push(Student(3,"selvamani"));

    while(!q.empty()){
        Student s = q.front();
        s.disply();
        q.pop();
    }
}
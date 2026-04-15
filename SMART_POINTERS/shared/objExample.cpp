/*
Multiple users accessing same file.
*/
#include<iostream>
#include<memory>
class Document{
    public :
        Document(){
            std::cout<<"Document is created"<<std::endl;
        };
        void read(){
            std::cout<<"Document read"<<std::endl;
        }
        ~Document(){
            std::cout<<"Document is destroyed"<<std::endl;
        };
};
int main(){
    std::shared_ptr<Document> user1 = std::make_shared<Document>();
    std::shared_ptr<Document> user2 = user1;//shared resource
    std::cout<<"shared count : "<<user1.use_count()<<std::endl;
    user1->read();
}//destroyed when both go out of scope

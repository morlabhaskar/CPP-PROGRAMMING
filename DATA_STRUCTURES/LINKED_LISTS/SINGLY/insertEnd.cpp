#include<iostream>
using namespace std;
typedef struct Node{
    int data;
    struct Node *link;
}NODE;
NODE *createNode(int data){
    NODE *newNode=new NODE;
    newNode->data=data;
    newNode->link=nullptr;
    return newNode;
}
void insertEnd(NODE* &ptr,int data){
    NODE *newNode=createNode(data);
    if(ptr==nullptr){
        ptr=newNode;
        return;
    }else if(ptr->link==nullptr){
        ptr->link=newNode;
        return;
    }
    NODE* temp=ptr;
    while(temp->link!=nullptr){
        temp=temp->link;
    }
    temp->link=newNode;

}
void display(NODE *ptr){
    if(ptr==nullptr){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    cout<<"Linked List is :"<<endl;
    while(ptr){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    cout<<endl;
}
void freeup(NODE *ptr){
    NODE *del=nullptr;
    while(ptr){
        del=ptr;
        ptr=ptr->link;
        delete del;
    }
    cout<<"Memory Freed Successfully"<<endl;
}
int main(){
    NODE *head=nullptr;
    char ch;
    while(1){
        cout<<"Choice : i:insert  p:print  q:quit"<<endl;
        cin>>ch;
        switch(ch){
            case 'i':
                int data;
                cout<<"Enter the Data to Insert :"<<endl;
                cin>>data;
                insertEnd(head,data);
                break;
            case 'p':
                display(head);
                break;
            case 'q':
                freeup(head);
                cout<<"Bye"<<endl;
                return 0;
            default:
                cout<<"Invalid Operation"<<endl;
                break;
        }
    }
}

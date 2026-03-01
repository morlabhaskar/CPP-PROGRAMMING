#include<iostream>
using namespace std;
typedef struct Node{
    int val;
    struct Node* next;
}NODE;
void insertEnd(NODE* &head,int data){
    NODE* newNode=new NODE;
    newNode->val=data;
    newNode->next=nullptr;
    if(head==nullptr){
        head=newNode;
        return;
    }
    NODE* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newNode;
}
Node* reverse(NODE* head){
    if(!head){
        cout<<"List is Empty"<<endl;
        return head;
    }
    else if(!head->next){
        cout<<"Only one Node is Present"<<endl;
        return head;
    }
    NODE* prev=nullptr,*cur=head,*next=nullptr;
    while(cur){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    cout<<"Reverse Successfully"<<endl;
    return prev;
}
void displayNodes(NODE* &head){
    if(!head){
        cout<<"List is Empty"<<endl;
        return;
    }
    NODE* temp=head;
    cout<<"Singly Linked List is :"<<endl;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void freeup(NODE* &ptr){
    NODE *del=nullptr;
    while(ptr){
        del=ptr;
        ptr=ptr->next;
        delete del;
    }
    cout<<"Memory Freed Successfully"<<endl;
}
int main(){
    NODE* head=nullptr;
    char ch;
    while(1){
        cout<<"i:insert  d:display r:reverse  q:quit"<<endl;
        cout<<"Enter the Choice :"<<endl;
        cin>>ch;
        switch(ch){
            case 'i':
                int data;
                cout<<"Enter the Data :"<<endl;
                cin>>data;
                insertEnd(head,data);
                break;
            case 'd':
                displayNodes(head);
                break;
            case 'r':
                head=reverse(head);
                break;
            case 'q':
                freeup(head);
                cout<<"Thank You"<<endl;
                return 0;
            default :
                cout<<"Invalid Choice"<<endl;
                break;
        }
    }
}
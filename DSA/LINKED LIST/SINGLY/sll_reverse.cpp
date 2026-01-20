#include<iostream>
using namespace std;
struct Node{
    int val;
    struct Node* next;
};
void insertEnd(struct Node* &head,int data){
    struct Node* newNode=new Node();
    newNode->val=data;
    newNode->next=nullptr;
    if(head==nullptr){
        head=newNode;
        return;
    }
    struct Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newNode;
}
Node* reverse(struct Node* head){
    if(!head){
        cout<<"List is Empty"<<endl;
        return head;
    }
    else if(!head->next){
        cout<<"Only one Node is Present"<<endl;
        return head;
    }
    struct Node* prev=nullptr,*cur=head,*next=nullptr;
    while(cur){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    cout<<"Reverse Successfully"<<endl;
    return prev;
}
void displayNodes(struct Node* &head){
    if(!head){
        cout<<"List is Empty"<<endl;
        return;
    }
    struct Node* temp=head;
    cout<<"Singly Linked List is :"<<endl;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    struct Node* head=nullptr;
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
                cout<<"Thank You"<<endl;
                return 0;
            default :
                cout<<"Invalid Choice"<<endl;
                break;
        }
    }
}
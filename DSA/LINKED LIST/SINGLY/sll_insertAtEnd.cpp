#include<iostream>
using namespace std;
struct Node{
    int val;
    struct Node* next;
};
void insertEnd(struct Node* &head,int data){
    struct Node* newNode=new Node();
    newNode->val=data;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return;
    }
    struct Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newNode;
}
void displayNodes(struct Node* &head){
    if(!head){
        cout<<"List is Empty"<<endl;
        return;
    }
    struct Node* temp=head;
    cout<<"Singly Linked List is :"<<endl;
    while(temp){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    struct Node* head=NULL;
    char ch;
    while(1){
        cout<<"i:insert  d:display  q:quit"<<endl;
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
            case 'q':
                cout<<"Thank You"<<endl;
                return 0;
            default :
                cout<<"Invalid Choice"<<endl;
                break;
        }
    }
}
#include<iostream>
using namespace std;
struct Node{
    int val;
    struct Node* next;
};
void insertEnd(struct Node* &head,int data){
    struct Node* newNode=new Node();
    newNode->val=data;
    if(!head){
        head=newNode;
        newNode->next=newNode;
        return;
    }
    struct Node* temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
}
void findLength(struct Node* &head){
    int len=0;
    if(head==NULL){
        cout<<"Length : "<<len<<endl;
        return;
    }
    len=1;
    struct Node* temp=head->next;
    while(temp!=head){
        len++;
        temp=temp->next;
    }
    cout<<"Length : "<<len<<endl;
}
void displayNodes(struct Node* &head){
    if(!head){
        cout<<"List is Empty"<<endl;
        return;
    }
    struct Node* temp=head;
    cout<<"Circular Singly Linked List is :"<<endl;
    do{
        cout<<temp->val<<"->";
        temp=temp->next;
    }while(temp != head);
    cout<<head->val<<endl;
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
            case 'f':
                findLength(head);
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
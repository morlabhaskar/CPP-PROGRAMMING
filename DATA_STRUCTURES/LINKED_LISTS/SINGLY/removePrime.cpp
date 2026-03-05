#include<iostream>
using namespace std;
typedef struct Node{
    int data;
    struct Node *next;
}NODE;
NODE *createNode(int data){
    NODE *newNode=new NODE;
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
void insertEnd(NODE* &ptr,int data){
    NODE *newNode=createNode(data);
    if(ptr==NULL){
        ptr=newNode;
        return;
    }
    if(ptr->next==NULL){
        ptr->next=newNode;
        return;
    }
    NODE* temp=ptr;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void display(NODE *ptr){
    if(ptr==NULL){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    while(ptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int is_prime(int data){
    if(data<=1) return 0;
    for(int i=2;i*i<=data;i++){
        if(data%i==0) return 0;
    }
    return 1;
}
void remove_prime(NODE* &head){
    NODE* ptr=head;
    NODE *del=NULL;
    while(ptr && is_prime(ptr->data)){
        del=ptr;
        ptr=ptr->next;
        delete del;
    }
    head=ptr;
    if(ptr==NULL) return;
    while(ptr->next){
        if(is_prime(ptr->next->data)){
            del=ptr->next;
            ptr->next=del->next;
            delete del;
        }
        else{
            ptr=ptr->next;
        }
    }
}
void freeup(NODE* &ptr){
    NODE *del=NULL;
    while(ptr){
        del=ptr;
        ptr=ptr->next;
        delete del;
    }
    cout<<"Memory Freed Successfully"<<endl;
}
int main(){
    NODE *head=NULL;
    insertEnd(head,11);
    insertEnd(head,3);
    insertEnd(head,6);
    insertEnd(head,5);
    insertEnd(head,12);
    insertEnd(head,17);
    display(head);
    remove_prime(head);
    display(head);
    freeup(head);
}
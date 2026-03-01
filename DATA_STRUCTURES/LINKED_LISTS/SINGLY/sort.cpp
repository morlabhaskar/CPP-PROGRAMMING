#include<iostream>
using namespace std;
typedef struct Node{
    int data;
    struct Node *link;
}NODE;
NODE* createNode(int data){
    NODE* newNode = new NODE;
    newNode->data=data;
    newNode->link=NULL;
    return newNode;
}
void insertEnd(NODE* &ptr,int data){
    NODE* newNode=createNode(data);
    if(ptr==NULL){
        ptr=newNode;
        return;
    }
    if(ptr->link==NULL){
        ptr->link=newNode;
        return;
    }
    NODE* temp=ptr;
    while(temp->link){
        temp=temp->link;
    }
    temp->link=newNode;
}
void display(NODE* &ptr){
    if(ptr==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    cout<<"List is : ";
    NODE* temp=ptr;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}
void bubble_sort(NODE* &head){
    if(head==NULL || head->link==NULL){
        cout<<"Not Enough to sorting the list"<<endl;
        return;
    }
    int swapped;
    NODE* ptr1=NULL,*lptr=NULL;
    do{
        swapped=0;
        ptr1=head;
        while(ptr1->link!=lptr){
            if(ptr1->data > ptr1->link->data){
                swapped=1;
                int num=ptr1->data;
                ptr1->data=ptr1->link->data;
                ptr1->link->data=num;
            }
            ptr1=ptr1->link;
        }
        lptr=ptr1;
    }while(swapped);
    cout<<"Sorting Successfully"<<endl;
}
void freeup(NODE* ptr){
    NODE *del=ptr;
    while(ptr){
        del=ptr;
        ptr=ptr->link;
        delete del;
    }
    cout<<"Memory Freed Successfully"<<endl;
}
int main(){
    NODE* head=NULL;
    char ch;
    while(1){
        cout<<"Enter the Choice :"<<endl;
        cout<<"i:insert  p:print  s:sort  q:quit"<<endl;
        cin>>ch;
        switch(ch){
            case 'i':
                int data;
                cout<<"Enter the Data :"<<endl;
                cin>>data;
                insertEnd(head,data);
                break;
            case 'p':
                display(head);
                break;
            case 's':
                bubble_sort(head);
                break;
            case 'q':
                freeup(head);
                cout<<"Bye..."<<endl;
                return 0;
            default :
                cout<<"invalid Operation"<<endl;
                break;
        }
    }
}

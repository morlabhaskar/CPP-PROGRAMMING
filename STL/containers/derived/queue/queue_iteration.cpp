#include<iostream>
#include<queue>
void printQueue(std::queue<int> &q){
    if(q.empty()){
        return;
    }
    int x;
    x = q.front();
    std::cout<<x<<" ";
    q.pop();
    printQueue(q);
    q.push(x);//restore after iteration
}
int main(){
    std::queue<int> q;
    int n,x;
    std::cout<<"Enter the Queue Size :"<<std::endl;
    std::cin>>n;
    std::cout<<"Enter the Queue Elements :"<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>x;
        q.push(x);
    }
    std::cout<<"All Queue Elements are :"<<std::endl;
    printQueue(q);
    std::cout<<std::endl;
    printQueue(q);
    std::cout<<std::endl;
    printQueue(q);
}
#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int, vector<int>, greater<int>> pq; //Min Heap
    priority_queue<int> pq; // By default: Max Heap
    pq.push(10);
    pq.push(20);
    pq.push(30);

    cout<<pq.top();
}

/*
Element with highest priority is served first
By default: Max Heap
Can be changed to Min Heap
*/
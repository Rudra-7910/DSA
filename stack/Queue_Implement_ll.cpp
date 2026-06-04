#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    Node* front;
    Node * rear;
    public:
    Queue(){
        front=rear=NULL;
    }
    void enqueue(int x){
        if(rear==NULL)
        {
            front=rear=new Node(x);
            return ;
        }
        Node* newNode= new Node(x);
        rear->next= newNode;
        rear= newNode;
    }
    void dequeue(){
        if (front==NULL)
        {
            cout<<"Queue Empty"<<endl;
            return;
        }
        Node* temp= front;
        front=front->next;
        cout << front->data << " deleted"<<endl;
        if (front == NULL)
        rear = NULL;
        delete temp;
    }
    void peek () {
        if(front==NULL)
        {
            cout<<"Queue Empty"<<endl;
            return;
        }
        cout<< front->data<<endl;
    }
};
int main(){
    
    return 0;
}
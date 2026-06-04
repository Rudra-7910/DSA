#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
class Stack{
    Node*top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int val)
    {
        Node* newNode= new Node(val);
        newNode->next=top;
        top=newNode;
    }
    int pop()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty";
            return -1;
        }
        int val= top->data;
        Node*temp=top;
        top= top->next;
        delete temp;
        return val;
    }
    int peek() {
        if(top==NULL)
        {
            cout<<"Stack is empty";
            return -1;
        }
        return top->data;
    }
};
int main(){
    
    return 0;
}
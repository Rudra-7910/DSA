#include <bits/stdc++.h>
using namespace std;
class Queue{
    int arr[100];
    int front=0;
    int rear=-1;
    public:
    void enqueue(int x)
    {
        rear++;
        arr[rear]=x;
    }
    void dequeue(){
        if(front>rear) return;
        front++;
    }
    int peek(){
        if(front>rear)return -1;
        return arr[front];
    }
    bool isEmpty()
    {
        return front>rear;
    }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front element: " << q.peek() << endl; // 10
    q.dequeue();
    cout << "After dequeue, front: " << q.peek() << endl; // 20
    q.enqueue(40);
    q.enqueue(50);
    cout << "Queue elements: ";
    while (!q.isEmpty()) {
        cout << q.peek() << " ";
        q.dequeue();
    }
    cout << endl;
    if (q.isEmpty()) {
        cout << "Queue is empty now." << endl;
    }
    return 0;
}
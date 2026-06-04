#include <iostream>
using namespace std;
class CircularQueue {
    int arr[5];  
    int front, rear;
public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }
    void enqueue(int x) {
        if ((rear + 1) % 5 == front) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % 5;
        arr[rear] = x;
        cout << x << " inserted\n";
    }
    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << arr[front] << " removed\n";
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % 5;
        }
    }
    void display() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % 5;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(6);
    q.enqueue(7);
    q.display();

    return 0;
}
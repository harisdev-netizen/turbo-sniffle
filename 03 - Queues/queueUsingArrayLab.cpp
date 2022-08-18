#include <iostream>
using namespace std;

const int N = 7;
int Queue[N];

int rear = -1;
int front = -1; // Initially the queue is empty.

void enqueue(int newData)
{
    if ((front == 0 and rear == N - 1) || (front == rear + 1))
    {
        cout << "\nOverflow: Queue is full. Cannot engueue.\n"
             << newData << endl;
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == N - 1)
            rear = 0; // More around the rear to the front of the queue...

        else

            rear = rear + 1;
    }
    Queue[rear] = newData; // Add the new data to the queue.
}

int dequeue()
{
    if (front == -1) // Checking if the queue is already empty.
    {
        cout << "\nQueue is Empty\n"
             << endl;
        return -1;
    }
    int dataRemove = Queue[front];

    // Finding the new value of the front.
    if (front == rear) // Queue has only one element.
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = front + 1;
    }
    return dataRemove;
}

int main()
{
    cout << "\nEqueueing: " << 1;
    enqueue(1);
    cout << "\nEqueueing: " << 2;
    enqueue(2);
    cout << "\nEqueueing: " << 3;
    enqueue(3);
    cout << "\nEqueueing: " << 4;
    enqueue(4);
    cout << "\nEqueueing: " << 5;
    enqueue(5);
    cout << "\nEqueueing: " << 6;
    enqueue(6);
    cout << "\nEqueueing: " << 7;
    enqueue(7);
    cout << "\nEqueueing: " << 8;
    enqueue(8);
    cout << "\nEqueueing: " << 9;
    enqueue(9);

    cout << "\Removing: " << dequeue() << endl;
    cout << "\Removing: " << dequeue() << endl;
    cout << "\Removing: " << dequeue() << endl;
    cout << "\Removing: " << dequeue() << endl;
    cout << "\Removing: " << dequeue() << endl;
}
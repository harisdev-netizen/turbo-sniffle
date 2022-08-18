#include <iostream>
using namespace std;

struct Queue
{
    int data;
    Queue *next;
};

Queue *head = NULL;
Queue *tail = NULL;

void enqueue(int newData)
{
    Queue *q = new Queue;

    if (head == NULL)
    {
        head = q;
        tail = q;
    }
    else
    {
        tail->next = q;
        tail = q;
    }

    tail->data = newData; // Adding the new data to the tail of the Queue.
    tail->next = NULL;

    return;
}

int dequeue()
{
    if (head == NULL)
    {
        cout << "\nUnderflow: Queue is empty.\n";

        return -1;
    }

    int dataRemove = head->data;

    if (head == tail)
    {
        head = NULL;
        tail = NULL;
    }

    else
        head = head->next;

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

    return 0;
}
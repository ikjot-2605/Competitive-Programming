//IKJOT LAB 7 PROGRAM
#include <bits/stdc++.h>

using namespace std;

int max_size = 10;

char PriorityQueue[5][10] = {0};

int front_pointer[5] = {-1, -1, -1, -1, -1};

int rear_pointer[5] = {0, 0, 0, 0, 0};

bool isPQEmpty(int i) { return (front_pointer[i] == -1 || front_pointer[i] == rear_pointer[i]); }

bool isPQFull(int i) { return (front_pointer[i] == (rear_pointer[i] + 1) % max_size); }

char dequeue()
{
    for (int i = 5; i >= 1; i--)
    {
        if (isPQEmpty(i))
            continue;
        char data = PriorityQueue[i][front_pointer[i]];
        front_pointer[i] = (front_pointer[i] + 1) % max_size;
        return data;
    }
    return 0;
}

void enqueue(char data, int priority)
{
    if (isPQFull(priority))
        cout << "The queue for priority " << priority << " is full. Element not inserted." << endl;
    else
    {
        PriorityQueue[priority][rear_pointer[priority]] = data;
        rear_pointer[priority] = (rear_pointer[priority] + 1) % max_size;
        if (front_pointer[priority] == -1)
            front_pointer[priority] = 0;
        cout << "Element inserted successfully." << endl;
    }
}

void print_queue()
{
    for (int i = 5; i >= 1; i--)
    {
        if (!isPQEmpty(i))
        {
            int temp = front_pointer[i];
            while (temp <= rear_pointer[i])
                cout << PriorityQueue[i][temp++] << " ";
        }
    }
    cout << endl;
}

int main()
{
    cout << "Welcome to the C++ Priority Queue Program - Lab - 7(Listed Below are the available operations you can perform)- P2 -ARRAY IMPLEMENTATION" << endl;
    cout << "Press 1 to print the PQ" << endl;
    cout << "Press 2 to enqueue an element to queue" << endl;
    cout << "Press 3 to dequeue an element from queue " << endl;
    cout << "Press 0 to exit the program." << endl
         << endl;

    while (true)
    {
        cout << "Enter your operation type : ";
        int type;
        cin >> type;
        if (type == 0)
        {
            cout << "Thank you. Exiting." << endl
                 << endl;
            break;
        }
        if (type == 1)
        {
            print_queue();
        }
        else if (type == 2)
        {
            cout << "Enter the data to insert into PQ : ";
            char data;
            cin >> data;
            cout << "Enter the priority of the data : ";
            int priority;
            cin >> priority;
            enqueue(data, priority);
        }
        else if (type == 3)
        {
            cout << "The dequeued element is " << dequeue() << endl;
        }
    }
    

    return 0;
}
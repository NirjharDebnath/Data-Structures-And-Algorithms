#include <bits/stdc++.h>
using namespace std;

class QUEUE {
    int start = -1, end = -1, cursize = 0;
    static const int capacity = 10;
    int qu[capacity];

public:
    int pop() {
        if (cursize == 0) {
            cout << "Queue Empty\n";
            return -1;
        }

        int element = qu[start];

        if (cursize == 1) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % capacity;
        }

        cursize -= 1;
        return element;
    }

    void push(int data) {
        if (cursize >= capacity) {
            cout << "Queue Full\n";
            return;
        }

        if (cursize == 0) {
            start = 0;
            end = 0;
        } 
        else {
            end = (end + 1) % capacity;
        }

        qu[end] = data;
        cursize += 1;
    }

    int top() {
        if (cursize == 0) {
            cout << "Queue Empty\n";
            return -1;
        }
        return qu[start];
    }

    int getsize() {
        return cursize;
    }

    void display() {
        if (cursize == 0) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue: ";
        int i = start;
        for (int count = 0; count < cursize; count++) {
            cout << qu[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
};

// driver code
int main() {
    QUEUE q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.display();

    cout << "Top: " << q.top() << endl;

    q.pop();
    q.display();

    q.push(40);
    q.push(50);
    q.display();

    while (q.getsize() > 0) {
        cout << "Popped: " << q.pop() << endl;
    }

    q.pop(); // Underflow test

    return 0;
}

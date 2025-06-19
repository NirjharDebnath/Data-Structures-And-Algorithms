#include <bits/stdc++.h>
using namespace std;

class STACK {
    int capacity = 10;
    int st[10], i = -1;

public:
    int top() {
        if (i == -1) {
            cout << "Empty Stack\n";
            return -1;
        }
        return st[i];
    }

    void pop() {
        if (i == -1) {
            cout << "Empty Stack\n";
            return;
        }
        i--;
    }

    void push(int data) {
        if (i >= capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        i += 1;
        st[i] = data;
    }

    int getSize() {
        return i + 1;
    }

    void display() {
        if (i == -1) {
            cout << "Stack is empty\n";
            return;
        }
        for (int j = i; j >= 0; j--) {
            cout << st[j] << " ";
        }
        cout << endl;
    }
};


// driver code

int main() {
    STACK s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Current Stack: ";
    s.display();

    cout << "Top element: " << s.top() << endl;

    s.pop();
    cout << "After pop, top: " << s.top() << endl;

    cout << "Current size: " << s.getSize() << endl;

    s.pop();
    s.pop();
    s.pop();  // underflow test

    s.push(40);
    s.push(50);
    cout << "Final Stack: ";
    s.display();

    return 0;
}

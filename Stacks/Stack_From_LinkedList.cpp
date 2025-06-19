#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class STACK {
    struct Node {
        int data;
        Node* next;
        Node(int value) {
            data = value;
            next = NULL;
        }
    };

    Node* head = NULL;
    int size = 0;

public:
    void push(int data) {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
        size += 1;
    }

    int pop() {
        if (head == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }
        int value = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        size -= 1;
        return value;
    }

    int peek() {
        if (head == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }
        return head->data;
    }

    int getsize() {
        return size;
    }

    void display() {
        Node* curr = head;
        cout << "Stack (top to bottom): ";
        while (curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};


int main() {
    STACK s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "Top: " << s.peek() << endl;

    cout << "Popped: " << s.pop() << endl;
    s.display();

    cout << "Size: " << s.getsize() << endl;

    return 0;
}

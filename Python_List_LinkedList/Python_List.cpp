#include <iostream>
using namespace std;

class LinkedList {
private:
    class Node {
    public:
        int data;
        Node *next;

        Node(int value) : data(value), next(nullptr) {}  // constructor
    };

    Node *head;
    int length;

public:
    LinkedList() : head(nullptr), length(0) {}  // constructor

    void append(int value) {
        Node *newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node *temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        length++;
    }

    void insert(int index, int value) {
        if (index < 0 || index > length) {
            cout << "Index out of range!" << endl;
            return;
        }

        Node *newNode = new Node(value);

        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node *temp = head;
            for (int i = 0; i < index - 1; ++i) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
        length++;
    }

    void replace(int index, int value) {
        if (index < 0 || index >= length) {
            cout << "Index out of range!" << endl;
            return;
        }

        Node *temp = head;
        for (int i = 0; i < index; ++i) {
            temp = temp->next;
        }
        temp->data = value;
    }

    void remove(int index) {
        if (index < 0 || index >= length) {
            cout << "Index out of range!" << endl;
            return;
        }

        Node *temp = head;

        if (index == 0) {
            head = head->next;
            delete temp;
        } else {
            for (int i = 0; i < index - 1; ++i) {
                temp = temp->next;
            }
            Node *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }
        length--;
    }

    int size() const {
        return length;
    }

    void print() const {
        Node *temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<<endl;
    }

    // Destructor to clean up memory
    ~LinkedList() {
        while (head) {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList myList;

    for (int i = 1; i <= 5; ++i) {
        myList.append(i * 10);
    }
    cout << "Original List: ";
    myList.print();

    myList.insert(2, 25);
    cout << "After insert(2, 25): ";
    myList.print();

    myList.replace(3, 100);
    cout << "After replace(3, 99): ";
    myList.print();

    myList.remove(4);
    cout << "After remove(4): ";
    myList.print();

    cout << "Size of list: " << myList.size() << endl;

    return 0;
}

# Linked List Implementation in C++

This repository contains a **Linked List** implementation in C++ with methods similar to Python's `list` functionality. The `LinkedList` class supports various operations such as insertion, deletion, replacement, and traversal.

## 📋 Features

- **Append**: Add elements to the end of the linked list.
- **Insert**: Insert elements at a specific index.
- **Replace**: Replace an element at a given position.
- **Remove**: Remove an element by index.
- **Length**: Get the current size of the list.
- **Print**: Display the contents of the linked list.
- **Destructor**: Automatically frees memory when the object goes out of scope.

## 🛠️ Class Structure

### `Node` Class (Private)

- **`int data`**: Stores the value of the node.
- **`Node *next`**: Pointer to the next node.

### `LinkedList` Class

- **Constructor**: Initializes an empty linked list.
- **Destructor**: Frees all allocated memory.

## 📚 Functions

```cpp
void append(int value);         // Add a value to the end
void insert(int index, int value); // Insert a value at a specific index
void replace(int index, int value); // Replace a value at a given index
void remove(int index);         // Remove a node by index
int size();                     // Get the length of the linked list
void print();                   // Print the linked list
```

## 🚀 Usage

### 1. Clone the Repository
```bash
git clone https://github.com/your-username/linked-list-cpp.git
cd linked-list-cpp
```

### 2. Compile and Run the Code
```bash
g++ linkedlist.cpp -o linkedlist
./linkedlist
```

### 3. Example Output
```
Enter 5 values: 10 20 30 40 50
Original List: 10 20 30 40 50 NULL
After insert(2, 25): 10 20 25 30 40 50 NULL
After replace(3, 99): 10 20 25 99 40 50 NULL
After remove(4): 10 20 25 99 50 NULL
Size of list: 5
Destructor called. Memory freed.
```

## 📄 Example Code

```cpp
#include <iostream>
using namespace std;

int main() {
    LinkedList myList;

    myList.append(10);
    myList.append(20);
    myList.append(30);

    myList.print(); // Output: 10 20 30 NULL

    myList.insert(1, 15); 
    myList.print(); // Output: 10 15 20 30 NULL

    myList.replace(2, 99);
    myList.print(); // Output: 10 15 99 30 NULL

    myList.remove(1);
    myList.print(); // Output: 10 99 30 NULL

    cout << "Length: " << myList.size() << endl; // Output: Length: 3

    return 0;
}
```

## 🧹 Memory Management

The destructor automatically releases the memory by iterating through the linked list and deleting each node:

```cpp
~LinkedList() {
    while (head) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}
```

## 📌 Contributions

Feel free to fork, improve, and submit pull requests!

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/new-feature`).
3. Commit your changes (`git commit -m 'Add new feature'`).
4. Push to the branch (`git push origin feature/new-feature`).
5. Open a pull request.

## 📜 License

This project is licensed under the MIT License.

## 🤝 Acknowledgements

Thanks for checking out this Linked List implementation in C++! Contributions and feedback are welcome.

---

⭐️ If you like this project, consider giving it a star on [GitHub]((https://github.com/NirjharDebnath/Data_structures/blob/main/Python_List_LinkedList/Python_List.cpp))!

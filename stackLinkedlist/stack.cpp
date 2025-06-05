#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }
};

// stack class
class stack
{
private:
    node *top; // pointer untuk top node di stack

public:
    stack()
    {
        top = NULL; // initialize the stack with a null top pointer
    }

    // push operation: insert an element onto the top of the stack
    int push(int value)
    {
        node *newNode = new node(); // memgalokasikan memory untuk node baru
        newNode->data = value;      // memasukkan value
        newNode->next = top;        // membuat next pointer node baru ke current top node
        top = newNode;              // memindahkan pointer top ke node baru
        cout << "push value: " << value << endl;
        return value;
    }
    // is empty operation: check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // mengembalikan nilai true jika top pointer NULL,
    }

    // pop operation: remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty." << endl;
            return; // id the stack is empty, print e message and return
        }
        cout << "popped value: " << top->data << endl;
        top = top->next; // mengubah top pointer ke next node
    }
};
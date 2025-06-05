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
};
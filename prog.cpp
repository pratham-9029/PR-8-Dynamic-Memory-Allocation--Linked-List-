#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
private:
    int size;
    Node *head;

public:
    LinkedList()
    {
        this->head = NULL;
        this->size = 0;
    }

    void InsertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->size++;
    }
    void deleteAtIndex(int index) {
        if (index < 0 || this->head == nullptr) {
            cout << "Invalid index or list is empty.\n";
            return;
        }

        if (index == 0) {
            if (this->head == nullptr) {
                cout << "List is empty.\n";
                return;
            }
    
            Node* ptr = this->head;
            this->head = this->head->next;
            delete ptr;
            cout << "Deleted node at start.\n";
            return;
        }

        Node* ptr = this->head;
        int size;
        this->size = 0;

        while (ptr->next != nullptr && this->size < index - 1) {
            ptr = ptr->next;
            this->size++;
        }

        if (ptr->next == nullptr) {
            cout << "Index out of bounds.\n";
        } else {
            Node* toDelete = ptr->next;
            ptr->next = toDelete->next;
            delete toDelete;
            cout << "Deleted node at index " << index << ".\n";
        }
    }
    void ViewLinkedList()
    {
        Node *ptr = this->head;
        cout << "List = ";
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
    void ReversList()
    {
        Node *ptr = this->head;
        cout<<"Reversed List = ";
        for(int i = this->size ; i >1 0; i--)
        {
            cout << ptr->data << " ";
        }
        cout<<endl;
        
    }
};

int main()
{
    LinkedList list;
    // int index;

    list.InsertAtBeginning(40);
    list.InsertAtBeginning(30);
    list.InsertAtBeginning(20);
    list.InsertAtBeginning(10);

    // cout << "enter index : ";
    // cin >> index;
    // list.deleteAtIndex(index);
    list.ViewLinkedList();
    list.ReversList();
    return 0;
}
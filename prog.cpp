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
            cout << "Invalid index or list is empty."<<endl;
            return;
        }

        if (index == 0) {
            if (this->head == nullptr) {
                cout << "List is empty."<<endl;
                return;
            }
    
            Node* ptr = this->head;
            this->head = this->head->next;
            delete ptr;
            cout << "Deleted node at start."<<endl;
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
            cout << "Index out of bounds."<<endl;
        } else {
            Node* toDelete = ptr->next;
            ptr->next = toDelete->next;
            delete toDelete;
            cout << "Deleted node at index " << index << "."<<endl;
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
    void ReverseList()
    {
        Node *rev = NULL;
        Node* current = this->head;
        Node* next = NULL;

        while (current != NULL)
        {
            next = current->next;
            current->next = rev;
            rev = current;
            current =  next;
        }
        this->head = rev;
        cout<<"List Reversed"<<endl;
        
    }
    void searchList(int element)
    {
        Node *ptr = this->head;
        int index = 0;

        while (ptr != NULL)
        {
            if (ptr->data == element)
            {
                cout<<"Value Found at "<<index << " = "<< element<<endl;
            }
            ptr = ptr->next;
            index++;
        }
        
    }
};

int main()
{
    LinkedList list;
    int index,choice,value,size;

    do
    {
        cout<<endl<<"-------------------------------------"<<endl;
        cout<<"1. Insert At Beginning."<<endl;
        cout<<"2. Search By Value."<<endl;
        cout<<"3. Revers Linked List. "<<endl;
        cout<<"4. View Linked List."<<endl;
        cout<<"5. Delete Node. "<<endl;
        cout<<"0. EXIT"<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter Size of list : ";
                cin>>size;
                for (int i = 0; i < size; i++)
                {
                    cout<<"Enter of Value "<<i<<"  : ";
                    cin>>value;
                    list.InsertAtBeginning(value);
                }
                break;
            case 2:
                cout<<"Enter Value For Search : ";
                cin>>value;
                list.searchList(value);
                break;
            case 3:
                list.ReverseList();
                list.ViewLinkedList();
                break;
            case 4:
                list.ViewLinkedList();
                break;
            case 5:
                cout<<"Enter the index : ";
                cin>>index;
                list.deleteAtIndex(index);
                break;
            case 0:
            
                break;
            default:
                cout<<"Invalid Choice !"<<endl;    
        }
    } while (choice != 0);
    return 0;
}
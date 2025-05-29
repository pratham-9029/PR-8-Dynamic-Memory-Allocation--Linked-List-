# PR-8-Dynamic-Memory-Allocation--Linked-List-
    // // void deleteAtIndex(int index){
    //     if (index >= 0 && index < this->size)
    //     {
    //         Node *ptr = this->head;
    //         if (index == 0)
    //         {
    //             this->head = this->head->next;
    //             this->head->next = ptr;
    //             this->size++;
    //             cout << "Node Deleted From Beginning." << endl;
    //             return;
    //         }
    //         // Node *temp = this->head;
    //         // // for (int i = 1; i < index-1; i++)
    //         // // {
    //         // //     ptr = ptr->next;
    //         // // }
    //         // // ptr->next = ptr->next->next;
    //         // // delete ptr->next->next;
    //         // // cout<<"Node Dleted At index "<<index<<endl;
    //         // Node* toDelete = temp->next;
    //         // for (int i = 0; i < index; i++)
    //         // {
    //         //     temp = temp->next;
    //         // }

    //         // temp->next = toDelete->next;
    //         // delete toDelete;
    //         // cout << "Deleted node at index " << index << ".\n";

    //         if (index < 0 || head == nullptr)
    //         {
    //             cout << "Invalid index or list is empty.\n";
    //             return;
    //         }

    //         Node *temp = head;
    //         int pos = 0;

    //         while (temp->next != nullptr && pos < index - 1)
    //         {
    //             temp = temp->next;
    //             pos++;
    //         }

    //         if (temp->next == nullptr)
    //         {
    //             cout << "Index out of bounds.\n";
    //         }
    //         else
    //         {
    //             Node *toDelete = temp->next;
    //             temp->next = toDelete->next;
    //             delete toDelete;
    //             cout << "Deleted node at index " << index << ".\n";
    //         }
    //     }
    //     else
    //     {
    //         cout << "Index is out of bounds. " << endl;
    //     }
    //     // this->size++;
    // }
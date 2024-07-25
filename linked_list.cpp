#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    int value;
    node* head = nullptr;
    node* temp = nullptr;

    cout << "Enter the elements of the linked list (enter -1 to stop):" << endl;

    while (true) {
        cin >> value;
        if (value == -1) break;

        node* newnode = new node();
        newnode->data = value;
        newnode->next = nullptr;

        if (head == nullptr) {
            head = newnode;
            temp = head;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    cout << "Linked list: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct node{
    
    int data;
    node* next;
    
};


int main() {
  
  int value; 
  
  node* head = nullptr;
  node* temp = nullptr;
  
  cout<<"enter the element in linked list (-1 for stop)= ";

while(true)
{
    cin >> value;
    if(value == -1)
    {
        break;
    }
    else
    {
      node* newnode = new node();
      newnode-> data = value;
      newnode-> next = nullptr;
      
      if(head == nullptr)
      {
          head = newnode;
          temp = head;
      }
      else
      {
          temp->next = newnode;
          temp = newnode;
      }
      
      
    }
}
  
  temp = head;
 
  
  while(temp != nullptr)
  {
       cout << temp->data << " ";
       temp = temp-> next;
  }
  
  cout << "\n";
  
  int pos, val;
    cout << "Enter the position to insert the new element: ";
    cin >> pos;
    cout << "Enter the value to insert: ";
    cin >> val;

    node* newnode = new node();
    newnode->data = val;
    newnode->next = nullptr;

    if (pos == 1) {
        newnode->next = head;
        head = newnode;
    } else {
        temp = head;
        for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position out of bounds" << endl;
            delete newnode;
        } else {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }

    // Print the updated linked list
    cout << "Updated Linked List: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
  
  
    return 0;
}
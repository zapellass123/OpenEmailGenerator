#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
int lengthFinder(node *&head)
{
    // step 1 find the length of the LL
    int length = 0;
    node *temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    } // gotten the length of the LL;

    return length;
}
node *kappend(node *&head, int k)
{
    int length = lengthFinder(head);
    // edge case when k is bigger than length so we do
    k = k % length;
    node *newHead;
    node *newTail;
    node *tail = head; // traversal pointer

    int count = 1; // determine the pos
    while (tail->next != NULL)
    {
        if (count == length - k)
        {
            newTail = tail;
        }
        if (count == length - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }

    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

void insertAtTail(node *&head, int val)
{

    node *newNode = new node(val); // created a  new node;
    if (head == NULL)
    {
        head = newNode;
        return;
        // here you can simply call insertAtBeginning
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    // as our new node already points to NULL in its next so we simply do nothing
}

void display(node *head)
{

    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    node *newHead = kappend(head, 3);
    display(newHead);

    return 0;
}

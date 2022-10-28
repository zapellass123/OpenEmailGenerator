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

node *mergeLL(node *&headLL1, node *&headLL2)
{
    node *ptr1 = headLL1;
    node *ptr2 = headLL2;
    node *dummyNode = new node(-1);
    node *ptr3 = dummyNode;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data <= ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
            ptr3 = ptr3->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
            ptr3 = ptr3->next;
        }
    }
    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }

    return dummyNode->next;
}

node *mergeLLRecursive(node *&headLL1, node *&headLL2)
{
    if (headLL1 == NULL)
    {
        return headLL2;
    }
    if (headLL2 == NULL)
    {
        return headLL1;
    }
    node *result;
    if (headLL1->data <= headLL2->data)
    {
        result = headLL1;
        result->next = mergeLLRecursive(headLL1->next, headLL2);
    }
    else
    {
        result = headLL2;
        result->next = mergeLLRecursive(headLL1, headLL2->next);
    }
    return result;
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
    node *headLL1 = NULL;
    node *headLL2 = NULL;
    insertAtTail(headLL1, 1);
    insertAtTail(headLL1, 4);
    insertAtTail(headLL1, 5);
    insertAtTail(headLL1, 7);
    insertAtTail(headLL2, 2);
    insertAtTail(headLL2, 3);
    insertAtTail(headLL2, 6);
    display(headLL1);
    display(headLL2);
    node *newHead = mergeLLRecursive(headLL1, headLL2);
    display(newHead);

    return 0;
}

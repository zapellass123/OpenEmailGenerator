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

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }

        temp = temp->next;
        count++;
    }
    temp->next = startNode; // as temp is at NULL point its next to startNODe resulting in a cycle
}

bool detectCycle(node *&head)
{
    node *fast = head;
    node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node *&head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 23);
    insertAtTail(head, 12);
    insertAtTail(head, 10);
    display(head);
    makeCycle(head, 2);
    // node *newhead = reverseRecursive(head);
    if (detectCycle(head))
    {
        cout << "cycle present BEWARE!" << endl;
    }
    else
    {
        cout << "cycle absent CHILL!" << endl;
    }
    removeCycle(head);
    if (detectCycle(head))
    {
        cout << "cycle present BEWARE!" << endl;
    }
    else
    {
        cout << "cycle absent CHILL!" << endl;
    }
    display(head);
}

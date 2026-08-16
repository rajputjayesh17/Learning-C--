// INsert at begin

#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string data;
    Node *next = NULL;
};
Node *head = NULL;
void insertBegin(string d)
{
    Node *newNode = new Node;
    newNode->data = d;
    if (head == NULL)
    {
        newNode = head;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertEnd(string d)
{
    Node *newNode = new Node;
    Node *temp = head;
    newNode->data = d;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertPosition(int p, string d)
{
    if (p <= 1 || head == NULL)
    {
        insertBegin(d);
        return;
    }
    Node *newNode = new Node;
    newNode->data = d;
    Node *temp = head;
    for (int i = 1; i < p - 1 && temp->next != NULL; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void deletebegin()
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}
void deleteEnd()
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        head == NULL;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    delete temp;
}
void deletePosition(int p)
{
    for (int i = 1; p <= 1 || temp->next != NULL)
    {
        temp
    }
}
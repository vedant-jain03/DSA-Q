#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insert(Node** head,int data)
{
    Node* temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(*head==NULL)
    {
        *head=temp;
        return;
    }
    else
    {
        Node* last=(*head);
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=temp;
        return;
    }
}
void push(Node** head,int data)
{
    Node* temp=new Node();
    temp->data=data;
    temp->next=(*head);
    (*head)=temp;
}
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
void reverse(Node** head)
{
    Node* current=(*head);
    Node* prev=NULL,*next=NULL;
    while(current)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}
int main()
{
    Node* head=NULL;
    // head->next=NULL;
    push(&head,10);
    push(&head,5);
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);
    print(head);
    reverse(&head);
    cout<<"\nReverse Linked List:";
    print(head);
}
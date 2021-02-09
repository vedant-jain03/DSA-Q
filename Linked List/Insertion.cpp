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
}
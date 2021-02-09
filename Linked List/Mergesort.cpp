#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void divide(Node* root,Node** a,Node** b)
{
    Node* fast=root->next,*slow=root;
    while(fast)
    {
        fast=fast->next;
        if(fast)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    *a=root;
    *b=slow->next;
    slow->next=NULL;
}
Node* merge(Node* a,Node* b)
{
    Node* res=NULL;
    if(a==NULL)return b;
    else if(b==NULL)return a;
    if(a->data<=b->data)
    {
        res=a;
        res->next=merge(a->next,b);
    }
    else
    {
        res=b;
        res->next=merge(a,b->next);
    }
    return res;
}
void mergesort(Node** head)
{
    Node* root=*head;
    Node* a,*b;
    if(root==NULL || root->next==NULL)return;
    divide(root,&a,&b);
    mergesort(&a);
    mergesort(&b);
    *head=merge(a,b);
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
    while(head)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
int main()
{
    Node* head=NULL;
    push(&head,1);
    push(&head,9);
    push(&head,3);
    push(&head,5);
    push(&head,4);
    push(&head,7);
    mergesort(&head);
    print(head);
}
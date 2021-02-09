#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node** head,int data)
{
    Node* temp=new Node();
    temp->data=data;
    temp->next=(*head);
    (*head)=temp;
}
Node* Addone(Node* head)
{
    Node* res=head,*temp=NULL;
    int carry=1,sum;
    while(head)
    {
        sum=carry+head->data;
        carry=(sum>=10)?1:0;
        sum=sum%10;
        head->data=sum;
        temp=head;
        head=head->next;
    }
    if(carry>0)
    {
        push(&temp->next,carry);
    }
    return res;
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
    push(&head,9);
    push(&head,9);
    head=Addone(head);
    print(head);
}
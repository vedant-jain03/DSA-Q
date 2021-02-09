#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node** root,int data)
{
    Node* temp=new Node();
    temp->data=data;
    temp->next=(*root);
    (*root)=temp;
}
void print(Node* root)
{
    while(root)
    {
        cout<<root->data<<"->";
        root=root->next;
    }
}
void removedup(Node** root)
{
    Node* current=*root;
    Node* n;
    while(current->next!=NULL)
    {
        if(current->data==current->next->data)
        {
            n=current->next->next;
            free(current->next);
            current->next=n;
        }
        else
        {
            current=current->next;
        }
    }
}
int main()
{
    Node* root=NULL;
    push(&root,40);
    push(&root,30);
    push(&root,20);
    push(&root,20);
    push(&root,10);
    push(&root,5);
    print(root);
    removedup(&root);
    cout<<"\nAfter Removing Duplicates:";
    print(root);
}
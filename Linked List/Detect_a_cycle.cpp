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
bool detect(Node* temp)
{
    unordered_set<Node*> mp;
    while(temp)
    {
        if(mp.find(temp)!=mp.end())return true;
        mp.insert(temp);
        temp=temp->next;
    }
    return false;
}
int main()
{
    Node* root=NULL;
    push(&root,40);
    push(&root,30);
    push(&root,20);
    push(&root,10);
    push(&root,5);
    root->next->next->next=root;
    if(detect(root))cout<<"Yes\n";
    else cout<<"No\n";
}
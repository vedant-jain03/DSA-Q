#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack{
  int top;
  public:
  int a[MAX];
  Stack(){top=-1;}
  bool push(int x);
  int pop();
  int peek();
  bool isempty();
};
bool Stack::push(int x)
{
    if(top==MAX-1){
        cout<<"Overflow\n";
        return false;
    }
    else
    {
        a[++top]=x;
        cout<<"Pushed element:"<<x<<"\n";
        return true;
    }
}
int Stack::pop()
{
    if(top==-1)
    {
        cout<<"Underflow\n";
        return 0;
    }
    else
    {
        return a[top--];
    }
}
int Stack::peek()
{
    if(top==-1)
    {
        cout<<"Underflow\n";
        return 0;
    }
    else
    {
        return a[top];
    }
}
bool Stack::isempty()
{
    if(top==-1)return false;
    else return true;
}
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop();
    
}
#include <bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1,q2;
    int size;
    public:
    
    Stack(){
        size=0;
    }
    void push(int x)
    {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q=q1;
        q1=q2;
        q2=q;
        cout<<"Pushed:"<<x<<"\n";
    }
    int pop()
    {
        if(q1.empty())return -1;
        int x=q1.front();
        q1.pop();
        return x;
    }
    int top()
    {
        if(q1.empty())return -1;
        return q1.front();
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<"\n";
    cout<<s.top()<<"\n";
}
#include <bits/stdc++.h>
using namespace std;

queue<int> q;
void reverse()
{
    stack<int> st;
    while(!q.empty())
    {
        int x=q.front();
        st.push(x);
        q.pop();
    }
    
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}
int main()
{
    for(int i=0;i<5;i++)
    {
        q.push(i+1);
    }
    cout<<12345<<"\n";
    cout<<"Reverse Queue:";
    reverse();
    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
}
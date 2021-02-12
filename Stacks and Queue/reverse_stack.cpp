#include <bits/stdc++.h>
using namespace std;
stack<char> st;

char insert_bottom(char x)
{
    if(st.size()==0)st.push(x);
    else
    {
        char a=st.top();
        st.pop();
        insert_bottom(x);
        
        st.push(a);
    }
}
char reverse()
{
    if(st.size()>0)
    {
        char x=st.top();
        st.pop();
        reverse();
        
        insert_bottom(x);
    }
}
int main()
{
    string s="vedant";
    for(int i=0;i<s.length();i++)
    {
        char a=s[i];
        st.push(a);
    }
    cout<<"String in the array:tnadev";
    // for(int i=0;i<s.length();i++)
    // {
    //     char a=st.top();
    //     st.pop();
    //     cout<<a;
    // }
    cout<<endl;
    cout<<"Reverse :";
    reverse();
    for(int i=0;i<s.length();i++)
    {
        char a=st.top();
        st.pop();
        cout<<a;
    }
}
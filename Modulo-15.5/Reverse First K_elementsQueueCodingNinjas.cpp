#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int>st;
    queue<int>tmp;
    int sz=q.size();
    while(k--)
    {
        st.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        tmp.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while(!tmp.empty())
    {
        q.push(tmp.front());
        tmp.pop();
    }
    return q;

}

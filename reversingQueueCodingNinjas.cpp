#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
    stack<int>st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
     while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    return q;

}

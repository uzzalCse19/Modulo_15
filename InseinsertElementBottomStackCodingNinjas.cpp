#include <bits/stdc++.h> 
stack<int>Nst;
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    while(!myStack.empty())
    {
        Nst.push(myStack.top());
        myStack.pop();
    }
    Nst.push(x);
    while(!Nst.empty())
    {
        myStack.push(Nst.top());
        Nst.pop();
    }
    return myStack;

}

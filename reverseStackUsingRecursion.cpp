void reverseStack(stack<int> &s) {
  
        // Write your code here
    stack<int> tmp;
      if (s.empty())  return;
      int x = s.top();
      s.pop();
      reverseStack(s);
      while(!s.empty())
      {
          tmp.push(s.top());
          s.pop();
      }
      tmp.push(x);
       while(!tmp.empty())
      {
          s.push(tmp.top());
          tmp.pop();
      }
    
}
#include <bits/stdc++.h> 
int sum(stack<int>s)
{
    int total=0;
    while(!s.empty())
    {
      total+=s.top();
      s.pop();
    }
    return total;
}
int maxSum(stack<int> &s1, stack<int> &s2, stack<int> &s3) {
    // Write your code here
    int sum1=sum(s1);
    int sum2=sum(s2);
    int sum3=sum(s3);
    while(true)
    {
        if(sum1==sum2 && sum2==sum3) break;
         if (sum1>=sum2 && sum1>=sum3) {
          sum1 -= s1.top();
          s1.pop();
        } 
        else if (sum2>=sum1 && sum2>=sum3){
          sum2 -= s2.top();
        s2.pop();
        } else {
        sum3 -= s3.top();
        s3.pop();
        }
    }
    return sum1;
}
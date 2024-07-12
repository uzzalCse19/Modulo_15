#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    stack<char>one;
    stack<char>zero;
    cin>>s;
    for(char c:s)
    {
      if(c=='1') one.push(c);
      else zero.push(c);
    }
    int o=one.size(),z=zero.size();
    while(z--)
    {
        if(one.empty()) break;
        else one.pop();
    }
    while(o--)
    {
        if(zero.empty()) break;
        else zero.pop();
    }
    if(one.empty() && zero.empty()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}
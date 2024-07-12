#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int qu;
queue<string>q;
cin>>qu;
while(qu--)
{
    int n;
    string s;
    cin>>n;
    if(n==0){
     cin>>s;
     q.push(s);
    }
    else if(n==1)
    {
        if(!q.empty())  
        {
            cout<<q.front()<<endl;
            q.pop();
        }
        else cout<<"Invalid"<<endl;
       
    }
}
return 0;
}
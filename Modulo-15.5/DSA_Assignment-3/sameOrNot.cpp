#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    stack<int>st;
    queue<int>q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    int flag=0;
    if(n!=m) {
    cout<<"NO"<<endl;
        flag=1;
    }
    else
    {
        while(!q.empty())
        {
            if(st.top()!=q.front()){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            q.pop();
            st.pop();
        }
    }
        if(flag==0) cout<<"YES"<<endl;

    return 0;
}

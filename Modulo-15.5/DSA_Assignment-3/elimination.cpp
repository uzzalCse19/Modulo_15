#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int q;
    cin>>q;
    while(q--)
    {
        int flag=0;
        string s;
        stack<char>st;
        cin>>s;
        int sz=s.size();
        if(s[sz-1]=='0' || (s[0]=='1' && s[1]=='0')){
         cout<<"NO"<<endl;
         flag=1;
        }
        else{
        for(char c:s)
        {
            if(c=='0') {
             st.push(c);
            }
            else {
            
                if(!st.empty() && st.top()=='0'){
                 st.pop();
                }
                else {
                  st.push(c);
                }
            }
        }
        }
        if(flag==0){
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }

    return 0;
}

class Solution {
public:
stack<char>s1,s2;
    bool backspaceCompare(string s, string t) {

        for(char c:s)
        {
            if(c!='#') s1.push(c);
            else 
            {
                if(!s1.empty()) s1.pop();
            }
        }
        for(char ch:t)
        {
            if(ch!='#') s2.push(ch);
            else 
            {
                if(!s2.empty()) s2.pop();
            }
        }
         return s1==s2;
        
    }
};
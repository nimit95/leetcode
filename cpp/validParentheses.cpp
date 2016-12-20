class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push('e');
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else if((s[i]==']' || s[i]=='}' || s[i]==')')&& (st.top()==s[i]-2 || st.top()==s[i]-1) && st.top()!='e')
                st.pop();
            else
                return false;
        }
        if(st.size()==1)
            return true;
        else
            return false;
    }
};

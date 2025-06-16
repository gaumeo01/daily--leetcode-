class Solution {
public:
    bool isValid(string s) {
        stack<char> m;
        for (char c : s) 
        {
            if (c == '(' || c == '{' || c == '[')
               { m.push(c);}

        else 
        {
            if (m.empty())
            return false;
            if (c == ')' && m.top() != '(' || c == ']' && m.top() != '[' ||
                c == '}' && m.top() != '{') 
                {
                return false;
            }
        m.pop();
    }}
        return m.empty();
    }
};
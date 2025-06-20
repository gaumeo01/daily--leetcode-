class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for (int i = 1; i < n; ++i) {
            string next = "";
            for (int j = 0; j < s.size(); ) {
                int count = 1;
                while (j + count < s.size() && s[j] == s[j + count]) {
                    ++count;
                }
                next += to_string(count) + s[j];
                j += count;
            }
            s = next;
        }
        return s;
    }
};
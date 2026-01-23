class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> ch;

        for (char c : chars) {
            ch[c] = 1 + ch[c];
        }

        int res = 0;
        for (const string& word : words) {
            unordered_map<char, int> copy = ch;
            bool valid = true;

            for (char c : word) {
                if (copy[c] > 0)
                    copy[c]--;
                else {
                    valid = false;
                    break;
                }
            }

            if (valid)
                res += word.length();
        }

        return res;
    }
};
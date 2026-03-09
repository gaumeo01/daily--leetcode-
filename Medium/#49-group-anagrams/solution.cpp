class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> nm;
        for (auto x : strs) {
            string t = x;
            sort(t.begin(), t.end());
            nm[t].push_back(x);
        }

        vector<vector<string>> rsl;
        for (auto x : nm)
            rsl.push_back(x.second);

        return rsl;
    }
};
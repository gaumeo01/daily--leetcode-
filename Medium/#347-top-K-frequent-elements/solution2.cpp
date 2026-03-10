class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> nm;
        for (auto x : nums)
            nm[x]++;

        vector<int> rsl;
        for (auto x : nm) {
            rsl.push_back(x.first);
        }

        sort(rsl.begin(), rsl.end(),[&](auto a, auto b)
         { return nm[a] > nm[b]; });
        rsl.resize(k);
        return rsl;
    }
};
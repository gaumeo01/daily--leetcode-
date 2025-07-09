class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
        unordered_set<int> NonD;
        for (int num : nums) {
            if (NonD.find(num) != NonD.end())
                return true;
            NonD.insert(num);
        }

        return false;
    }
};
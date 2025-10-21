class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> result(temp.size());
        stack<int> track;
        int n = temp.size();
        for (int i = 0; i < n; i++) {
            while (!track.empty() && temp[track.top()] < temp[i]) {
                result[track.top()] = i - track.top();
                track.pop();
            }
            track.push(i);
        }
        return result;
    }
};
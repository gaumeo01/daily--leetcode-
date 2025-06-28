class MinStack {
private:
    vector<vector<int>> st;

public:
    MinStack() {}

    void push(int val) {
        int minval = getMin();
        if (st.empty()|| minval>val) {
            minval = val;
        }
        st.push_back({val, minval});
    }

    void pop() { st.pop_back(); }

    int top() { return st.empty()? -1 : st.back()[0]; }

    int getMin() { return st.empty() ? -1 : st.back()[1]; }
};

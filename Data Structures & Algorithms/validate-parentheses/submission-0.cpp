class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp = {{')', '('}, {'}', '{'}, {']', '['}};
        for (auto str : s) {
            if (mp.count(str)) {
                if (!st.empty() && st.top() == mp[str]) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(str);
            }
        }

        return st.empty();
    }
};

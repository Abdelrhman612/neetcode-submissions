class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (auto& val : strs) {
            string sorted = val;
            sort(sorted.begin(), sorted.end());
            m[sorted].push_back(val);
        }

        vector<vector<string>> res;
        for (auto& val : m) {
            res.push_back(val.second);
        }

        return res;
    }
};

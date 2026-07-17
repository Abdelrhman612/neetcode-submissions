class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (auto& c : nums) {
            count[c]++;
        }

        vector<pair<int, int>> arr;
        for (auto& freq : count) {
            arr.push_back({freq.second, freq.first});
        }
        sort(arr.rbegin(), arr.rend());
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].second);
        }

        return result;
    }
};

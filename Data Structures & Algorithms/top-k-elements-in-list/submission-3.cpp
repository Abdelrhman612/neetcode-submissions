class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (auto& num : nums) {
            count[num]++;
        }

        vector<pair<int, int>> arr;
        for (auto& c : count) {
            arr.push_back({c.second, c.first});
        }
        sort(arr.rbegin(), arr.rend());
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].second);
        }

        return result;
    }
};

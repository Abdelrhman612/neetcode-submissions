class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int result = target - nums[i];
            if (m.count(result)) {
                return {m[result], i};
            }
            m[nums[i]] = i;
        }

        return {};
    }
};

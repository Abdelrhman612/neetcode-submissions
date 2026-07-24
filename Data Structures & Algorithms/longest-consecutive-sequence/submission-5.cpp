class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> setNums(nums.begin(), nums.end());
        int ans = 0;
        for (auto& num : nums) {
            if (setNums.find(num - 1) == setNums.end()) {
                int count = 1;
                while (setNums.find(num + count) != setNums.end()) {
                    count++;
                }
                ans = max(ans, count);
            }
        }

        return ans;
    }
};

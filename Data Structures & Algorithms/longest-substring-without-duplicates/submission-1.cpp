class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int mx = 0;
        int l = 0;

        for (int i = 0; i < s.size(); i++) {
            while (mp[s[i]] != 0) {
                mp[s[l]] = 0;
                l++;
            }
            mp[s[i]]++;
            mx = max(mx, (i - l + 1));
        }

        return mx;
    }
};

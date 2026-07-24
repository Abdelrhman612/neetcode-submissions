class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;

        int maxLength = 0;
        int l = 0; 
        int mxCount = 0;
        for (int i = 0; i < s.size(); i++) {
            count[s[i]]++;
            mxCount = max(mxCount, count[s[i]]);

            while ((i - l + 1) - mxCount > k) {
                count[s[l]]--;
                l++;
            }
            maxLength = max(maxLength, i - l + 1);
        }

        return maxLength;
    }
};

class Solution {
   public:
    bool isPalindrome(string s) {
        string word = "";
        for (auto& ch : s) {
            ch = tolower(ch);
            if (isalnum(ch)) {
                word += ch;
            }
        }

        int l = 0;
        int r = word.size() - 1;
        while (l < r) {
            if (word[l] != word[r]) {
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
};

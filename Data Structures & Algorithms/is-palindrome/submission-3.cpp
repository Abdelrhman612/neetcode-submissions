class Solution {
   public:
    bool isPalindrome(string s) {
        string word = "";
        for (auto& c : s) {
            c = tolower(c);
            if (isalnum(c)) {
                word += c;
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

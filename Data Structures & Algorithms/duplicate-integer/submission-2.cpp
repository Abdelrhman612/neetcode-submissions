class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int , int>count;
        for(auto &val : nums){
            count[val]++;
            if(count[val] >= 2){
                return true;
            }
        }



        return false;
        
    }
};
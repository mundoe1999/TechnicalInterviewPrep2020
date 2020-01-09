class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i = 0; i < nums.size(); i++){
            if(!seen.count(nums[i]))
                seen.insert(nums[i]);
            else
                seen.erase(nums[i]);
        }
        return (*seen.begin());
    }
};
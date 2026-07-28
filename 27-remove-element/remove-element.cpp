class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        k = size(nums);
        return k;
        
    }
};
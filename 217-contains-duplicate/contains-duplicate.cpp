#include <unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> nums_set;
        for(int i = 0;i<size(nums);i++){
            nums_set.insert(nums[i]);
            if(size(nums_set)<i+1){
                return true;
            }
        }
        return false;
    }
};
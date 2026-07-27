#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        unordered_set<int> unique;
        for(int i = 0 ; i < size(nums); i++){
            if (unique.contains(nums[i]) == false){
                unique.insert(nums[i]);
                k++ ;
            }else{
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        for(int i = 0; i < k; i++){
            nums.push_back(0);
        }

        return k;
    }
};
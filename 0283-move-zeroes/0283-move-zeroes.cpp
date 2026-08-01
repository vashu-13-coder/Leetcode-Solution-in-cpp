class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> result;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                result.push_back(nums[i]);
            }
            else {
                count++;
            }
        }
        for (int i = 0; i < count; i++) {
            result.push_back(0);
        }
        nums = result;
    }
};
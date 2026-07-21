class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int counts[102] = {0};
        
        
        for (int num : nums) {
            counts[num]++;
        }
        
        
        int runningSums[102] = {0};
        for (int i = 1; i <= 100; i++) {
            runningSums[i] = runningSums[i - 1] + counts[i - 1];
        }
        
        vector<int> result(nums.size());
        
        for (int i = 0; i < nums.size(); i++) {
            result[i] = runningSums[nums[i]];
        }
        
        return result;
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0; // Pointer to place the next non-zero element
        
        // Scan the array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                // Swap non-zero element to the insert position
                swap(nums[i], nums[insertPos]);
                insertPos++;
            }
        }
        
    }
};
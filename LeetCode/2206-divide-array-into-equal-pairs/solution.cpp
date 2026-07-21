class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int frequencies[501] = {0};
        
        // Count frequencies of each number
        for (int num : nums) {
            frequencies[num]++;
        }
        
        // Verify every number has an even frequency
        for (int i = 1; i <= 500; i++) {
            if (frequencies[i] % 2 != 0) {
                return false; // Odd count cannot form equal pairs
            }
        }
        
        return true;
    }     
};
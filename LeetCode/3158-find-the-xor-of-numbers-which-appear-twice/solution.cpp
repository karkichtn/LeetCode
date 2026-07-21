class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        bool seen[51] = {false};
        int xorSum = 0;
        
        // Loop and XOR elements upon their second occurrence
        for (int num : nums) {
            if (seen[num]) {
                xorSum ^= num; // Duplicate found, XOR it
            } else {
                seen[num] = true;
            }
        }
        
        return xorSum;
    }
};
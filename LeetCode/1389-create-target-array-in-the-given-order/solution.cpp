class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        
        // Loop and perform index-specific insertions
        for (int i = 0; i < nums.size(); i++) {
            target.insert(target.begin() + index[i], nums[i]);
        }
        
        return target;
    
        
    }
};
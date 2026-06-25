class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int>ans(2*n);

        for(int i=0; i < n; i++){
            if(i % 2 == 0){
                ans[i] = nums[i];
            }
            else{
                ans[i] = nums[n+i];
            }
        }
        return ans;
        
    }
};
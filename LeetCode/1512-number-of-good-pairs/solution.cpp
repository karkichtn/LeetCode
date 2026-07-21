class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int goodPairsCount = 0;
       
        int frequency[101] = {0};
        
        for (int num : nums) {
           
            goodPairsCount += frequency[num];
          
            frequency[num]++;
        }
        
        return goodPairsCount;
    }
};
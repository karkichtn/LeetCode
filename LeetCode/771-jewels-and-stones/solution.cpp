class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool isJewel[128] = {false};
        
        // Mark all characters that represent jewels
        for (char j : jewels) {
            isJewel[(unsigned char)j] = true;
        }
        
        int jewelCount = 0;
        // Count stones that are jewels
        for (char s : stones) {
            if (isJewel[(unsigned char)s]) {
                jewelCount++;
            }
        }
        
        return jewelCount;
    }
};
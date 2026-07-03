class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        
        // Swap opposite elements until pointers meet in the center
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};